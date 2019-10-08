#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N, R;

    // entrada por EOF
    while (cin >> N >> R)
    {
        // existem N mergulhadores (1 ... N)
        // e apenas R retornaram

        int retornou[ N + 1 ]; // precisamos desse tamanho para conter os indices de 0 a N inclusive
        // esse vetor irá indicar se o mergulhador x retornou
        // retornou[ x ] = 0 se ele nao retornou
        // retornou[ x ] = 1 se ele retornou

        // inicialmente nao sabemos quem retornou...
        for (int x = 1; x <= N; x++){
            retornou[ x ] = 0;
        }

        // lendo os que retornaram...
        for (int i = 0; i < R; i++){
            int x;
            cin >> x;
            retornou[ x ] = 1; // marcom ele como 1
        }

        // saída
        if (N == R) // se todos retornaram
        {
            cout << "*" << endl;
        }
        else
        {
            // preciso saber quem nao retornou e exibir ordenado
            for (int x = 1; x <= N; x++)
            {
                if (retornou[ x ] == 0)
                {
                    cout << x << " ";
                }
            }
            cout << endl; // nao esquecer da quebra de linha
        }
    }
    return 0;
}