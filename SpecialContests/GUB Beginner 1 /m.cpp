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
        ll a , b,x; cin >> a >> b;
        ll c , d,y; cin >> c >> d;
        int mn = min(b,d);
        b-=mn;
        d-=mn;
        if(b>=7) cout << ">" <<endl;
        else if(d>=7) cout << "<"<< endl;
        else{
            for(int i=0 ; i<b ; i++ ) a*=10;
            for(int i=0 ; i<d ; i++) c*=10;
            if(a<c) cout << "<" <<endl;
            else if(a>c) cout << ">" << endl;
            else cout << "=" << endl;
        }
    }

    return 0;
}