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
        ll f,sum;
        cin >> f >> sum;
        for(int i=0 ; i<f ; i++){
            int x; cin >> x;
            sum +=x;
        }
        vector <int> v;
       ll su=0;
       bool flag=0;
        for(int i=1 ; i<100000 ; i++){
            su+=i;
            v.pb(su);
            if(su==sum)flag=1;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}