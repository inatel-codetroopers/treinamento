#include <bits/stdc++.h>

// LIFE IS NOT A PROBLEM TO BE SOLVED

using namespace std;

typedef pair<int, int> ii;
typedef long long int ll;

vector<ii> adj[100010];
int dist[100010];

int n, m;

void dijsktra(int u)
{
    memset(dist, 0x3f3f3f3f, sizeof(dist)); // erase all array as INF

    priority_queue<ii> q;
    q.push(ii(0, u)); // custo , vertice
    dist[u] = 0;

    while (!q.empty())
    {
        ii aux = q.top(); // custo, vertice
        int u = aux.second, cost = -(aux.first);
        q.pop();

        cout << " entrei no " << u << " com dist " << cost << '\n';

        for (auto go : adj[u])
        {
            int v = go.first, c = go.second; // vertice, custo
            if (dist[v] <= cost + c)
                continue;
            dist[v] = cost + c;
            q.push(ii(-(cost + c), v));
        }

        cout << " sai do " << u << '\n';
    }
}

int main()
{
    cin >> n >> m;

    int u, v, c;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> c;
        adj[u].push_back(ii(v, c));
        adj[v].push_back(ii(u, c)); // grafo não direcionado
    }

    for (int u = 0; u < n; u++)
    {
        for (auto v : adj[u])
        {
            cout << u << " " << v.first << " " << v.second << '\n';
            // .first = vertice, .second = custo aresta
        }
    }

    dijsktra(0);

    return 0;
}