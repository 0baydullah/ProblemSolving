#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll n; cin >> n;
        string s; 
        cin >> s;
        ll a[10],ans=0;
        for(int i=0 ; i<n ; i++){
            memset(a,0,sizeof(a));
            ll mx=0,y=0;
            for(int j=i ; j<n ; j++){
                ll x =s[j]-'0';
                a[x]++;
                if(a[x]==1){
                    y++;
                }
                mx=max(mx,a[x]);
                if(mx>10) break;
                if(mx<=y) ans++;
            }

        }
        cout << ans << endl;
    }

    return 0;
}