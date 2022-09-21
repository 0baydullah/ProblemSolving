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
    int n; cin >> n;
    ll sum=0;
    ll mx=-1;
    for(int i=0 ; i<n-1 ;i++){
        ll a,b; cin >> a >> b;
        sum+=a,sum-=b;
        mx=max(sum,mx);
    }
    cout << mx << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}