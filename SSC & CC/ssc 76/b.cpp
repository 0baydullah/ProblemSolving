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
     //   int a[n];

        ll m=0,e=0,c=0;
        for(int i=0 ; i<n; i++){
            ll x; cin >> x;
            m+=abs(x);
            e+=abs(x)*abs(x);
            c= max(abs(x),c);
        }
        cout << m << endl;
        cout << fixed << setprecision(10) << sqrt(e) << endl;
        cout << c << endl;
    }

    return 0;
}