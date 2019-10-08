#include <bits/stdc++.h>

using namespace std;


int main()
{
    int v[10005];
    int n;

    while( true ) // nao sabemos quantos casos de testes terão...
    {
        cin >> n;
        if (n == 0) break; // fim da entrada, break sai do while

        // lendo a entrada
        for (int i = 0; i < n; i++)
            cin >> v[ i ];

        // processamento
        int picos = 0;

        // casos base (começo e fim)
        if (v[n - 1] < v[ 0 ] && v[ 0 ] > v[ 1 ])
            picos++;

        if (v[n - 1] > v[ 0 ] && v[ 0 ] < v[ 1 ])
            picos++;

        if (v[n - 2] < v[n - 1] && v[n - 1] > v[ 0 ])
            picos++;

        if (v[n - 2] > v[n - 1] && v[n - 1] < v[ 0 ])
            picos++;

        // meio do vetor
        for (int i = 1; i <= n - 2; i++)
        {
            // testando se v[ i ] é um pico

            if (v[i - 1] < v[ i ] && v[ i ] > v[ i + 1])
                picos++;
            
            if (v[i - 1] > v[ i ] && v[ i ] < v[ i + 1])
                picos++;
        }

        cout << picos << endl;
    }

    return 0;
}