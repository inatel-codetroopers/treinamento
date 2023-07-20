#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int main()
{

    int v[10];
    for (int i = 0; i < 10; i++)
        cin >> v[i];

    sort(v, v + 10);

    int k;
    cin >> k;

    // busca - quero saber se o elemento k existe no array v
    int ini = 0, fim = 9, mid, ans = -1;
    while (ini <= fim)
    {
        mid = (ini + fim) / 2;
        if (v[mid] == k)
        {
            ans = mid;
            break;
        }

        if (v[mid] > k)
        {
            fim = mid - 1;
        }
        else
        {
            ini = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}