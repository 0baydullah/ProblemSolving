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

    int n,m,k,p,ans=0;
    vector<ll>v;
    set<ll>s;
    cin >> n >> m >> k;
    for(int i=0 ;i <n;i++)
        for(int j=0 ; j<m ; j++)
            cin >> p,v.pb(p),s.insert(p%k);
    if(s.size()>1) return cout <<-1 ,0;

    sort(v.begin(),v.end());

    for(auto x :v)
        ans+=abs(x-v[(n*m-1)/2]);
    cout << ans/k << endl;
    return 0;
}