#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], vector<bool>& visited, int node) {
    visited[node] = true;
    for (auto it : adj[node]) {
        if (!visited[it]) {
            dfs(adj, visited, it);
        }
    }
}

int minimumOperation(int n, vector<pair<int, int>>& edges) {
    int len = edges.size();
    // since minimum number of edges is n-1.
    if (len < n - 1) {
        return -1;
    }

    vector<int> adj[n];

    for (auto& edge : edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }

    vector<bool> visited(n, false);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(adj, visited, i);
            ans++;
        }
    }

    return ans - 1;
}

int main() {
    int n=4;
    // cin >> n;

    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 2}};

    int ans = minimumOperation(n, edges);
    cout << ans << endl;

    return 0;
}
