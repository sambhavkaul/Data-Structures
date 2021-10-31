//Code to count components
#include <bits/stdc++.h>
using namespace std;
 
vector<int> ar[100001];
int vis[100001];
 
void DFS(int v)
{
    vis[v] = 1;
 
    for (int child : ar[v])
    {
        if (vis[child] == 0)
        {
            DFS(child);
        }
    }
}
 
int main()
{
 
    int n, m, a, b;
    cin >> n >> m;
 
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
 
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    int cc = 0;
 
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            DFS(i);
            cc++;
        }
    }
    cout << cc << "\n";
 
    return 0;
}
