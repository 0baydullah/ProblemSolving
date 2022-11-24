#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

 
bool possible(vector<ll> a,ll n,ll d,ll c,ll k){
    if(k==0){
        return (a[0]*d>=c);
    }
    ll sum=0,gain=0;
    if(k>=n){
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
    }
    else{
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
    }
 
    ll times=d/k;
 
    gain=times*sum;
 
    ll rem=d%k;
 
    if(rem>=n){
        for(int i=0;i<n;i++){
            gain+=a[i];
        }
    }
    else{
        for(int i=0;i<rem;i++){
            gain+=a[i];
        }
    }
 
    return (gain>=c);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        ll c , d; cin >> c >> d;
        vector<ll>a(n);
        for(int i=0 ; i<n; i++) cin >> a[i];


        sort(a.begin(),a.end(),greater<ll>());
    ll total =0;
    for(int i=0 ; i<min(n,(int)d) ; i++){
        total += a[i];
    }
    if(total>=c){
        cout << "Infinity" << endl;
    }
    ll ans =-1,l=0,h=(int)1e12;
    while(l<=h){
        ll mid = l+(h-l)/2;
        if(possible(a,n,d,c,mid+1)){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    if(ans==-1){
        cout << "Impossible" << endl;
    }
    else cout << ans << endl;
    }
    

    return 0;
}