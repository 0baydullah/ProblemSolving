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
    ll w, h;
    cin >> w >> h;
    ll ans =0;
    vector<ll>ht = {h,h,w,w};
    for(int i=0 ; i<4 ; i++){
        int k; cin >> k;
        ll mn,mx;
        cin >> mn;
        for(int j=0 ; j<k-1 ; j++)
            cin >> mx;
        ans = max(ans,(mx-mn)*ht[i]);
    }    
    cout << ans <<endl;
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