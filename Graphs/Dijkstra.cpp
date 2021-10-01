#include <bits/stdc++.h>
using namespace std;

int Dijkstra(vector<int> adj[], int n, int src) {

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n, INT_MAX);

    pq.push({0, src});
    dist[0] = 0;

    while(!pq.empty()) {
        auto u = pq.top();
        pq.pop();

        int minV = u.second;
        int d = u.first;

        for(auto v : adj[minV]){
            if(dist[v] > d + 1) {
                dist[v] = d + 1;

                pq.push({dist[v], v});
            }
        }
    }
    return dist[dist.size() - 1];
}

int main() {

    //Given graph
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {3, 4}};
    int n = 5;
    vector<int> adj[n];

    for(int i = 0; i < edges.size(); i++) {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    cout << Dijkstra(adj, n, 0) << "\n";
    return 0;
}