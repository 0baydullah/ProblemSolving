#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int a[1001][1001];
int vis[1001][1001];
int dp;
int n,m;

int x[]={0,0,-1,1};
int y[]={1,-1,0,0};

bool ok(int i, int j){
    if(vis[i][j])return false;
    if((i>=0 and i<n) and (j>=0 and j<m) and a[i][j]!=0) return true;
    return false;
}

void dfs(int i, int j){
    vis[i][j]=1;
    dp+=a[i][j];
    for(int k=0; k<4 ;k++){
        int xx=i+x[k];
        int yy=j+y[k];
        if(ok(xx,yy))
            dfs(xx,yy);
    }

    
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
       // memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
         cin >> n >> m;
        for(int i=0 ; i<n; i++)
            for(int j=0 ; j<m; j++)
                cin >> a[i][j];

        int ans=0;
        
        for(int i=0 ; i<n; i++)
            for(int j=0 ; j<m ; j++){
                if(!vis[i][j] and a[i][j]!=0){dp=0;
                    dfs(i,j);
                    ans=max(ans,dp);
                }
                
            }
        
        cout << ans << endl;
    }

    return 0;
}