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
    ll n,m;
    cin >> n >> m;
    vector<ll>v(m);
    for(ll &u:v) cin >> u;
    sort(v.begin(),v.end());
    vector<ll>v1;
    for(int i=1 ; i<m ; i++)
        v1.pb(v[i]-v[i-1]-1);
    v1.pb(v[0]-1+n-v[m-1]);
    sort(v1.begin(),v1.end(),greater<ll>());
    ll save=0;
    ll lst =0;

    for(int i=0 ; i<v1.size(); i++){
        if(lst>=v1[i])
            break;
        ll a1=v1[i]-lst;
        save+=max(1ll,a1-1);
        lst+=2;
        if(a1>2)
            lst+=2;
    }
    cout << n - save << endl;
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