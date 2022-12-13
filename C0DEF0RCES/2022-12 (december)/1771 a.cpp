#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define int long long 
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
        int a[n];
        ll mx=-1 ,mn =10000000000000;
        map<int,int>m;
        for(int i=0 ; i<n; i++){
            cin >> a[i];
            
            m[a[i]]++;
        }
        sort(a,a+n);
        if(m[a[0]]==n){
            ll ans = n*(n-1);
            cout << ans << endl;
            continue;
        }
      //  int val = max(m[mx],m[mn]);
        ll ans = (ll) m[a[0]]*m[a[n-1]]*2LL ;
        cout << ans << endl;
    }

    return 0;
}