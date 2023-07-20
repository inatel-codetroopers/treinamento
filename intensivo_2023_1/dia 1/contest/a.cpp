#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

int n, q, v[500050];
int main()
{
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    // sort(v, v + n);

    while (q--)
    {
        int k;
        scanf("%d", &k);

        // busca - quero saber se o elemento k existe no array v
        int ini = 0, fim = n - 1, mid, ans = -1;
        while (ini <= fim)
        {
            mid = (ini + fim) / 2;
            if (v[mid] == k)
            {
                ans = mid;
                fim = mid - 1;
                continue;
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

        printf("%d\n", ans);
    }

    return 0;
}