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

    int T=1;
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n; 
        ll a[n];
        ll ans=n;
        for(int i=0 ; i<n; i++){
            cin >> a[i];
        }
        ans+=a[0];
        for(int i=0 ; i<n-1 ;i++){
            if(a[i]>a[i+1]){
                ans+=a[i]-a[i+1]+1;
            }
            else if(a[i]<a[i+1]){
                ans+=1+a[i+1]-a[i];
            } else ans++;
        }
        cout << ans << endl;
    }

    return 0;
}