#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

vector<int> adj[100010];
int vis[100010];

int n, m;

void dfs(int u)
{
    cout << " entrei no " << u << '\n';
    if (vis[u])
        return;

    vis[u] = 1;

    for (auto v : adj[u])
    {
        if (vis[v])
            continue;
        dfs(v);
    }

    cout << " sai do " << u << '\n';

    return;
}

int main()
{
    cin >> n >> m;

    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // grafo não direcionado
    }

    for (int u = 0; u < n; u++)
    {
        for (auto v : adj[u])
        {
            cout << u << " " << v << '\n';
        }
    }

    dfs(0);

    return 0;
}