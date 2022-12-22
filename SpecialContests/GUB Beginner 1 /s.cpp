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
        ll n; cin >> n;
        n-=1;
        ll lg=log2(n);
        lg=1LL<<lg;
        for(int i=n ; i>=lg ; i--) cout << i << " ";
        for(int i=0; i<=lg-1 ;i++) cout << i << " ";
        cout << endl;
    }

    return 0;
}