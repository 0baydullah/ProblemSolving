#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 2e5;

int n, m;
vector<int> adj[MAXN+1];
bool visited[MAXN+1];

void dfs(int u, int& numVertices, int& numEdges) {
    visited[u] = true;
    numVertices++;
    numEdges += adj[u].size();
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, numVertices, numEdges);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool ans = true;
    for (int u = 1; u <= n; u++) {
        if (!visited[u]) {
            int numVertices = 0, numEdges = 0;
            dfs(u, numVertices, numEdges);
            if (numVertices != numEdges/2) {
                ans = false;
                break;
            }
        }
    }
    if (ans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
