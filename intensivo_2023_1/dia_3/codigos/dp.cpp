#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int pd[10000];
int vetor[1000];

// O(O(parametros) * O(transição))
// O(n)
int fib(int n) // parametros ou estado
{
    // caso base 1
    if (n == 0)
        return 0;

    // caso base 1
    else if (n == 1)
        return 1;

    if (pd[n] != -1) // memorização
        return pd[n];

    return pd[n] = fib(n - 1) + fib(n - 2); // transição
}

int res = 0, n;
// O(n)
int moeda(int i) // parametros -- estado
{
    // caso base
    if (i >= n) // Nao tenho moeda para pegar
        return 0;

    // memorização
    if (pd[i] != -1) // Encontrei o maior valor possivel para aquela casa
        return pd[i];

    // transição
    res = moeda(i + 1);                      // Náo pego a moeda
    res = max(res, moeda(i + 2) + vetor[i]); // Pegar a moeda

    return pd[i] = res;
}

int main()
{
    memset(pd, -1, sizeof(pd));

    cout << fib(200) << '\n';

    // int n;

    // cin >> n;

    //
    // for (int i = 0; i < n; i++)
    //     cin >> vetor[i];

    // cout << moeda(0) << endl;

    return 0;
}