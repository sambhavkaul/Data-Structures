void DFS(vector<int> adj[], int src, unordered_set<int> &st, vector<int> &result) {
    st.insert(src);
    result.push_back(src);
    // if(src == dest) check = true;
    
    for(auto u : adj[src]) {
        if(st.find(u) == st.end()) {
            DFS(adj, u, st, result);
        }
    }
}

vector<int>dfsOfGraph(int V, vector<int> adj[])
{
    vector<int> visited(V, false);
    vector<int> result;
    // adj[3].clear();
    // for(int i = 0; i < V; i++) {
    //     cout << i << "--->" << " ";
    //     for(auto u : adj[i]) {
    //         cout << u << " ";
    //     }
    //     cout << "\n";
    // }
    unordered_set<int> st;
    DFS(adj, 0, st, result);
    return result;
}
