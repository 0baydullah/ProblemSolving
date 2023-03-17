#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

char a[105][105];

bool ok(int i, int j){
    if(a[i][j]=='.'){
        if(a[i-1][j-1]!='*' and a[i-1][j]!='*' and a[i-1][j+1]!='*' and a[i][j-1]!='*' and a[i][j+1]!='*' and a[i+1][j-1]!='*' and a[i+1][j]!='*' and a[i+1][j+1]!='*') return 1;
        else return 0;
    }

    if(a[i][j]!='.' and a[i][j]!='*'){
        int cnt=0;
        int x=a[i][j]-'0';
        if(a[i-1][j-1]=='*')cnt++;
        if(a[i-1][j]=='*')cnt++;
        if(a[i-1][j+1]=='*')cnt++;
        if(a[i][j-1]=='*')cnt++;
        if(a[i][j+1]=='*')cnt++;
        if(a[i+1][j-1]=='*')cnt++;
        if(a[i+1][j]=='*')cnt++;
        if(a[i+1][j+1]=='*')cnt++;
        
        if(cnt==x)return 1;
        else return 0;

    }
}


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,m;
    cin >> n >> m;

    for(int i=0 ; i<105 ; i++){
        for(int j=0 ; j<105 ;j++)
            a[i][j]='0';
    }

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ;j++){
            cin >> a[i][j];
        }
    }

    bool flag=1;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ;j++){
            if(ok(i,j)) continue;
            else {
                flag=0;
                break;
            }
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}