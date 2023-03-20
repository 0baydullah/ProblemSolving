#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ull unsigned long long

using namespace std;

int vam=0,lyc=0;
int vv=0,ll=0;

vector<vector<int>>g;
set<pair<int,int>>s;
int type[20009];

void dfs(int n,int t){
    type[n]=t;

    if(g[n].size()==0){ type[n]=-69;return;}
    s.insert({n,t});
    for(auto x : g[n]){
        if(type[x]==-1){
            dfs(x,1-t);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int n; cin >> n;
        g.clear();
        g.resize(20009);
        memset(type,-1,sizeof(type));
        vam=0;
        while(n--){
            int u,v;
            cin >> u >>v;
            g[u].pb(v);
            g[v].pb(u);
        }

        for(int i=1 ; i<20001 ; i++){
            s.clear();
            int zero=0,one=0;
            if(type[i]==-1){
                dfs(i,0);
                vam+=max(vv,ll);
            }
            for(auto xx :s){
                if(xx.second==0) zero++;
                if(xx.second==1) one++;
            }
            vam+=max(zero,one);
        }
        
    
        cout << vam <<endl;

    }

    return 0;
}