#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int v[m];
    for (int i = 0; i < m; i++)
        cin >> v[i];

    // busca - quero saber se o elemento k existe no array v
    int ini = 0, fim = 10000, mid, ans = -1;
    while (ini <= fim)
    {
        mid = (ini + fim) / 2; // tamanho da fatia

        int qtf = 0; // qt de fatias que consigo gerar
        for (int i = 0; i < m; i++)
            qtf += v[i] / mid;

        if (qtf >= n)
        {
            ans = mid;
            ini = mid + 1;
        }
        else
        {
            fim = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}