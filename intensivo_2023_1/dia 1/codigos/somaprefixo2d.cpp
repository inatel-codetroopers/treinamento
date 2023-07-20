#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> v[i][j];

    int s[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
        s[i][0] = s[0][i] = 0;

    for (int i = 1; i <= n; i++)
        s[i][1] = s[i - 1][1] + v[i][1];

    for (int i = 1; i <= n; i++)
        s[1][i] = s[1][i - 1] + v[1][i];

    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= n; j++)
            s[i][j] = s[i - 1][j] + s[i][j - 1] + v[i][j] - s[i - 1][j - 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << s[i][j] << ' ';
        cout << '\n';
    }

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sabcd = s[c][d] - s[c][b - 1] - s[a - 1][d] + s[a - 1][b - 1];

    cout << sabcd << '\n';

    return 0;
}