#include <bits/stdc++.h>

using namespace std;
vector<int> v[1001];
int level[1001];
bool vis[1001];
int parent[1001];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
       int par=q.front();
q.pop();
//cout<<par<<endl;
for(int child:v[par])
{
if(vis[child]==false)
{
q.push(child);
vis[child]=true;
level[child]=level[par]+1;
parent[child]=par;
}
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
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    int src,des;
    cin>>src>>des;
    bfs(src);
    int x=des;
    vector<int>path;
    while (x!=-1)
    {
        /* code */
        path.push_back(x);
        x=parent[x];

    }
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++) cout<<path[i]<<" ";
    cout<<endl;
    
    
}