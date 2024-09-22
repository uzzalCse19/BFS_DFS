#include <bits/stdc++.h>

using namespace std;
vector<int> v[1001];
bool vis[1001];
void dfs(int src)
{
    cout<<src<<" ";
    vis[src]=true;
    for(int child:v[src])
    {
        if(vis[child]==false)
        {
            dfs(child);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    memset(vis,false,sizeof(vis));
    dfs(0);
    
}