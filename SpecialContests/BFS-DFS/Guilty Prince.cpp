// Add some code
#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int X[]={1,-1,0,0};
int Y[]={0,0,1,-1};

string s[23];
bool vis[23][23];

int n, m, cnt=0;

bool ok(int i, int j){
    if(vis[i][j])return false;
    if((i>=0 and i<n) and (j>=0 and j<m)) return true;
    return false;
}


void dfs(int x, int y){
    vis[x][y]=1;
    cnt++;
    for(int k=0 ; k<4 ; k++){
        int xx = x+X[k];
        int yy = y+Y[k];

        if(ok(xx,yy) and s[xx][yy]=='.')
            dfs(xx,yy);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        
        cnt=0;
        for(int i=0 ; i<23 ; i++){
            s[i].clear();
            for(int j=0 ; j<23 ; j++)
                vis[i][j]=0;
        }
        cin >> m >> n;

        for(int i=0 ; i<n ; i++){
            cin >> s[i];
        }

        int x,y;
        for(int i=0 ; i<n; i++)
            for(int j=0; j<m; j++)
                if(s[i][j]=='@'){
                    x=i;y=j;break;
                }

        dfs(x,y);
        cout << cnt << endl;
    }

    return 0;
}