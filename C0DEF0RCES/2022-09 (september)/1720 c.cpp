#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    int n, m; cin >> n>>m;
    char s[n][m];
    for(int i=0 ; i<n; i++)
        for(int j=0 ; j<m; j++) cin >> s[i][j];
    int sum=0 , mn=3;
    for(int i=0 ; i<n ;i++)
        for(int j=0 ; j<m ;j++)
            if(s[i][j]=='1') sum++;
    if(sum==0){
        cout << 0 << endl;
        return;
    }
    for(int x=0 ; x<n-1 ; x++)
        for(int y=0 ; y<m-1; y++){
            int curr=0;
            for(int i=0 ; i<2 ; i++)
                for(int j=0; j<2 ; j++)
                    if(s[x+i][y+j]=='1')
                        curr++;
            if(curr==0) continue;
            if(curr>1) curr--;
            mn=min(mn,curr);
        }
    cout << sum-mn+1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}               