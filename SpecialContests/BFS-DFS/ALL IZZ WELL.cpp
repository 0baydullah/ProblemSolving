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

#define ll long long
#define ull unsigned long long

using namespace std;

int fx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int fy[] = {0, 1, -1, -1, 0, 1, 1, -1};

int r,c;
string src = "ALLIZZWELL";
string s[101];
int pp = src.size();

int vis[101][101];

bool valid(int x, int y){
    if((x>=0 and x<r) and (y>=0 and y<c))
        return 1;
    return 0;
}

int dfs(int x, int y, int p)
{
    if(p == pp - 1 && src[p] == s[x][y]){
        return true;
    }

    if(src[p] != s[x][y]){
        return false;
    }

    for(int i = 0; i < 8; i++){
        int tx = x + fx[i];
        int ty = y + fy[i];

        bool f = false;
        if(!valid(tx, ty)) continue;
        if(!vis[tx][ty]){
            vis[tx][ty] = true;
            f = dfs(tx, ty, p + 1);
            vis[tx][ty] = false;

            if(f) return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        for(int i=0 ; i<101 ; i++){
            for(int j=0 ; j<101 ; j++){
                vis[i][j]=0;
            }
        }

        cin >> r >> c;

        for(int i=0 ; i<r ; i++){
            cin >> s[i];
        }

        bool flag=0;
        for(int i=0 ; i<r ; i++){
            for(int j=0 ; j<c ; j++){
                flag = dfs(i,j,0);
                if(flag)break;
            }
            if(flag) break;
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}