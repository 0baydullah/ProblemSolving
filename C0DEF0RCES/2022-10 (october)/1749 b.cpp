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
    ll n,x; cin >> n;
    vector<ll> a(n),b(n);
    for(int i=0 ; i<n; i++) cin >> a[i];
    for(int i=0 ; i<n; i++){
        cin >> b[i];
    } 
    ll sum=0;
    for(int i=0 ; i<n ; i++){
        if(i==n-1){
            sum+=a[i];
            break;
        }
        if(a[i]+(a[i+1]+b[i]) <= a[i+1]+(a[i]+b[i+1])){
            sum+=a[i];
            a[i+1]+=b[i];
        }
        else{
            sum+=a[i+1];
            a[i]+=b[i+1];
            swap(a[i+1],a[i]);
            swap(b[i+1],b[i]);
        }
    }
    cout << sum << endl;
}

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}