#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int s[n + 1];
    s[0] = 0;
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + v[i];

    int a, b;
    cin >> a >> b;
    if (b < a)
        swap(a, b);

    int sab = s[b] - s[a - 1];

    cout << sab << '\n';

    return 0;
}