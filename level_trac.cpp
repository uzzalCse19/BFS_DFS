#include <bits/stdc++.h>

using namespace std;
vector<int> v[1001];
int level[1001];
bool vis[1001];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
       int parent=q.front();
q.pop();
cout<<parent<<endl;
for(int child:v[parent])
{
if(vis[child]==false)
{
q.push(child);
vis[child]=true;
level[child]=level[parent]+1;
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
    int src;
    //cin>>src;
    bfs(0);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }
    
}