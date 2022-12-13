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
 main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n,m;
        cin >> n >> m;
        int ans =0 ;
        vector<int> prev(n+3,-1);
        for(int i=0 ; i<m ; i++){
            int x,y ; cin >> x >> y ;
            if(x>y)swap(x,y);
            prev[y]=max(prev[y],x);
        }
        int last =1;
        for(ll i=1 ; i<=n; i++){
            last = max(last,prev[i]+1);
            ans+=(i-last+1);
        }
        cout << ans << endl;
    }

}