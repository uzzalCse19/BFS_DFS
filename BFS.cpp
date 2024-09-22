#include <bits/stdc++.h>

using namespace std;
vector<int> v[1001];
bool vis[1001];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
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
    int src;
    cin>>src;
    bfs(src);
    
}