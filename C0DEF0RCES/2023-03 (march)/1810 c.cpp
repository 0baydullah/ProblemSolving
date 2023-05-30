#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void code(){
    ll n,c1,c2; cin>>n>>c1>>c2;
    vector<ll>a;
    map<ll,ll>mp; 
    ll tres=0;
    for(int i=0; i<n; i++){
        ll x; cin>>x;
        if(mp[x]){
            tres+=c1;
            continue;
        }
        mp[x]=1;
        a.pb(x);
    }
    srt(a);
    
    n=a.size();
    ll res=c2+(n*c1), previous{0}, tmp{0};
    for(int i=0; i<n; i++){
        tmp+=max(0ll,(a[i]-previous-1))*c2;
        ll cost=(n-i-1)*c1;
        cost+=tmp;
        res=min(cost,res);
        previous=a[i];
    }
    cout<<res+tres<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    while(T--) code();
    return 0;
}