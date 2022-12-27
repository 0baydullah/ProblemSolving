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
      cout << "Case " << t << ": ";
        ll w; cin >> w;
        ll a,b;
        if(w&1){
            cout << "Impossible\n";
        }
        else{
         a=w/2,b=2;
            while(!(a&1)){
                a/=2;
                b*=2;
            }
            cout << a << " " << b << endl;
        }
    }

    return 0;
}