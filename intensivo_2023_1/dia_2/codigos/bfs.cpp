#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

vector<int> adj[100010];
int vis[100010];

int n, m;

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vis[u] = 1;

    while (!q.empty())
    {
        u = q.front();
        q.pop();

        cout << " entrei no " << u << '\n';

        for (auto v : adj[u])
        {
            if (vis[v])
                continue;
            vis[v] = 1;
            q.push(v);
        }

        cout << " sai do " << u << '\n';
    }
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

    bfs(0);

    return 0;
}