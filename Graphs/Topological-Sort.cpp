vector<int> topoSort(int V, vector<int> adj[]) 
{
    int arr[V];
    memset(arr, 0, sizeof(arr));
    queue<int> q;
    
    for(int i = 0; i < V; i++) {
        for(int u : adj[i]) {
            arr[u]++;
        }
    }
    for(int i = 0; i < V; i++) {
        if(arr[i] == 0) {
            q.push(i);
        }
    }
    
    vector<int> ans;
    while(!q.empty()) {
        int v = q.front();
        ans.push_back(v);
        q.pop();
        for(int u : adj[v]) {
            arr[u]--;
            if(arr[u] == 0) {
                q.push(u);
            }
        }
    }
    
    return ans;
}
