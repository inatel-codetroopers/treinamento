#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

const int MAX = 1000001;
int v[MAX];
int tree[4 * MAX];

int merge(int a, int b)
{
    return a + b;
}

int query(int no, int i, int j, int a, int b)
{
    // estritamente fora do intervalo
    if (j < a || i > b)
    {
        return 0;
    }

    // estritamento dentro do intervalo
    if (i >= a && j <= b)
    {
        return tree[no];
    }

    // caso contrário
    int L = no * 2, R = no * 2 + 1, mid = (i + j) / 2;
    int SL = query(L, i, mid, a, b);
    int SR = query(R, mid + 1, j, a, b);

    return merge(SL, SR);
}

void update(int no, int i, int j, int p, int val)
{
    // estritamente fora do intervalo
    if (j < p || i > p)
    {
        return;
    }

    // estritamento dentro do intervalo
    if (i >= p && j <= p) // (i == j && i == p)
    {
        tree[no] = val;
        return;
    }

    // caso contrário
    int L = no * 2, R = no * 2 + 1, mid = (i + j) / 2;
    update(L, i, mid, p, val);
    update(R, mid + 1, j, p, val);

    int SL = tree[L];
    int SR = tree[R];

    tree[no] = merge(SL, SR);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            ans += query(1, 0, 1000000, 0, val - 1);
            update(1, 0, 1000000, val, val);
        }

        cout << ans << '\n';
    }

    return 0;
}