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
        int n , s , dt;
        bool flag =0,find=0;
        cin >> n >> s >> dt;
        int a[n+1];
        ll ans{0};
        for(int i=1 ; i<=n ;i++) cin >> a[i];

        int i;
        for(i=0 ; i<n ;i++){
            if(s==dt) break;
            s = a[s];
        }
        if(s==dt)cout << i;
        else cout << -1 ;
    }

    return 0;
}