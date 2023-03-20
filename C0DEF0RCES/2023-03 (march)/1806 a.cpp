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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == c && b == d){
            cout << 0 << endl; continue;
        }
        ll res = 0;


        ll ty = abs(b - d);
        res += ty;
        ll tx = a + ty;
        if(tx < c || b > d){
            cout << -1 << endl; continue;
        }    
        res += abs(tx - c);

        cout << res << endl;
    }

    return 0;
}