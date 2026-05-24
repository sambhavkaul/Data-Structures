class DSU {
    public:
        vector<int> parent, size;
        DSU(int n) {
            parent.resize(n);
            size.resize(n);

            for(int i = 0; i < n; i++) {
                parent[i] = i;
                size[i] = 1;
            }
        }

        int findParent(int node) {
            if(parent[node] == node) {
                return parent[node];
            }

            return parent[node] = findParent(parent[node]); // Path compression
        }

        void unionBySize(int u, int v) {
            int ulp_u = findParent(u);
            int ulp_v = findParent(v);

            if(ulp_u == ulp_v) {
                return;
            }

            if(size[ulp_u] < size[ulp_v]) {
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            } else {
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }
};
