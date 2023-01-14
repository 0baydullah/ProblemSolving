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
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int n; cin >> n;
        vector<pair<int,string>>a;
        
            string s; int aa,b,c;
        for(int i=0 ; i<n; i++){
            cin >> s >> aa >> b >> c;
            a.pb({aa*b*c,s});
        }
        sort(a.rbegin(),a.rend());

        if(a[0].first==a[1].first)
            cout << "no thief" << endl;
        else cout << a[0].second << " took chocolate from "<< a[n-1].second << endl;
        
    }

    return 0;
}