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
    ll n; cin >> n;
    ll xsum=0, ymx=0;
    for(int i=0 ; i<n ;i++)
    {
        ll x, y; cin >> x >> y;
        if(x>y) swap(x,y);
        xsum+=x; ymx=max(ymx,y);
    }
    cout << (xsum*2) + (ymx*2) << endl;
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