class SGT {
    public:
        vector<int> seg;
        int size;
        
        SGT(int n) {
            size = n;
            seg.resize(4 * size);
        }
        
        // idx is the index for the seg array, which is global
        void build(vector<int> &arr, int start, int end, int idx) {
            if(start == end) {
                seg[idx] = arr[start];
                return;
            }
            
            int mid = start + (end - start) / 2;
            build(arr, start, mid, 2 * idx + 1);
            build(arr, mid + 1, end, 2 * idx + 2);
            
            seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
        }
        
        // val is the value that needs to be updated in the seg array
        // i is the position or the index of the main array that is to updated
        void update(int start, int end, int idx, int i, int val) {
            if(start == end) {
                seg[idx] = val;
                return;
            }
            
            int mid = start + (end - start) / 2;
  
            if(i <= mid) {
                update(start, mid, 2 * idx + 1, i, val);
            } else {
                update(mid + 1, end, 2 * idx + 2, i, val);
            }
            
            seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
        }
        
        int query(int start, int end, int idx, int left, int right) {
            // We have 3 cases
            
            // 1) Complete inside, all in, returning the node value
            if(start >= left && end <= right) {
                return seg[idx];
            }
            
            // 2) Out of bound
            if(right < start || left > end) {
                return 0;
            }
            
            // 3) Partialy inside, then we need to go to the recursive calls
            int mid = start + (end - start) / 2;
            int l = query(start, mid, 2 * idx + 1, left, right);
            int r = query(mid + 1, end, 2 * idx + 2, left, right);
            
            return l + r;
        }
};
