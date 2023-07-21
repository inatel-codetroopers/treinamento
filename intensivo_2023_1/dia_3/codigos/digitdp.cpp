#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int pd[10000];
int vetor[1000];

string N;
char D;
int solve(int i, bool m, bool z, int q) // digito que estou; se o prefixo é menor; não é zero a esquerda, quantas vezes d já apareceu
{
    if (i >= N.size()) // não tenho mais dígito pra colocar
        return q;

    int resp = 0;
    if (m == 1) // prefixo é menor
    {
        for (char d = '0'; d <= '9'; d++)
        {
            resp += solve(i + 1, m, z | (d != '0'), q + (d == D && (D != '0' || z == 1)));
        }
    }
    else
    {
        for (char d = '0'; d <= N[i]; d++)
        {
            if (d < N[i])
            {
                resp += solve(i + 1, 1, z | (d != '0'), q + (d == D && (D != '0' || z == 1)));
            }
            else
            {
                resp += solve(i + 1, 0, z | (d != '0'), q + (d == D && (D != '0' || z == 1)));
            }
        }
    }

    return resp;
}

int main()
{
    cin >> N;
    for (int i = 0; i < 10; i++)
    {
        D = (i + '0');
        cout << i << " " << solve(0, 0, 0, 0) << '\n';
    }

    return 0;
}