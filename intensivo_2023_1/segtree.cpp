#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int v[100010];
int tree[4 * 100010];

int merge(int a, int b)
{
    return a + b;
}

void build(int no, int i, int j)
{
    if (i == j)
    {
        tree[no] = v[i];
        return;
    }

    int L = no * 2, R = no * 2 + 1, mid = (i + j) / 2;
    build(L, i, mid);
    build(R, mid + 1, j);

    int SL = tree[L];
    int SR = tree[R];

    tree[no] = merge(SL, SR);
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

void update(int no, int i, int j, int p)
{
    // estritamente fora do intervalo
    if (j < p || i > p)
    {
        return;
    }

    // estritamento dentro do intervalo
    if (i >= p && j <= p) // (i == j && i == p)
    {
        tree[no] = v[p];
        return;
    }

    // caso contrário
    int L = no * 2, R = no * 2 + 1, mid = (i + j) / 2;
    update(L, i, mid, p);
    update(R, mid + 1, j, p);

    int SL = tree[L];
    int SR = tree[R];

    tree[no] = merge(SL, SR);
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    build(1, 0, n - 1);

    // query
    int a, b, o;
    while (cin >> o >> a >> b)
    {
        if (o == 1)
            cout << query(1, 0, n - 1, a, b) << '\n';
        else
        {
            v[a] = b;
            update(1, 0, n - 1, a); // a = posição, b = novo valor
        }
    }

    return 0;
}