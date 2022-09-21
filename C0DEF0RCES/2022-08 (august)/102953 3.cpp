#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

vector<int>edge[1000005];
int vis[1000005];
int cnt=0;
map<int,int>m;

void dfs(int u)
{
    vis[u]=1;
    for(int i=0 ; i<edge[u].size(); i++)
    {
        int v = edge[u][i];
        if(vis[v] !=1)
        {
            dfs(v);
            if(edge[u].size()==2 and edge[v].size()==1 and m[u]==0)
            {
               // m[u]=1;
                cnt++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

 //   ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
     //   m.clear();
        for(int i=0 ; i<=n ; i++)
        {
            edge[i]={};
            vis[i]=0;
        }
        int u,v;

        m[1]=1;
        for(int i=0 ; i<n-1 ; i++)
        {
            cin >> u >> v;
            edge[u].pb(v);
            edge[v].pb(u);
        }

    }
    dfs(1);
    cout << cnt << endl;
    return 0;
}
