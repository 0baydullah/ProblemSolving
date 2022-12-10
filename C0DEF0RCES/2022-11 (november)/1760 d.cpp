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
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll cnt=0;
        ll n; cin >> n;        vector<ll> a(n+2);

        a[0] =(int) 1e18 , a[n+1] =(int) 1e18;
        for(int i=1 ; i<=n; i++){
            cin >> a[i];
        }
        int l=0,r=n;
        for(int i=1 ; i<=n; i++){
            if(a[i]==a[i+1]) continue;
            else{
                r=i+1;
                if(a[l]>a[i] and a[r] >a[i]){
                    cnt++;
                    l=i;
                }
                else l = i;
            }
        } 
    //    cout << "------" << cnt << " dfd";
        if(cnt==1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}