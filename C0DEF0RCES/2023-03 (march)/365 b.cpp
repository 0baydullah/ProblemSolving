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

    ll n; cin >> n;
    ll a[n];
    for(int i=0 ; i<n; i++) cin >> a[i];
    ll mx=min(2LL,n);
    ll tmp=2;
    for(int i=2 ; i<n ;i++){
        if(a[i]==a[i-1]+a[i-2]){
            tmp++;
            mx=max(mx,tmp);
        }else tmp=2;
    }
    cout << mx << endl;
    
    return 0;
}