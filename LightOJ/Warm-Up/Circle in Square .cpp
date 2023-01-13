#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI 2*acos(0.0)
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
      cout << "Case " << t << ": ";
        double r; cin >> r;
        double sq,cir;
        cir = PI*r*r;
        sq = (r+r)*(r+r);
        cout << fixed << setprecision(2) << sq-cir << endl;
    }

    return 0;
}