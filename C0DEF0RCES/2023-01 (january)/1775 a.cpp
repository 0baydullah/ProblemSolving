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
        string s ; cin >> s;
        int n = s.size();
        int x = n/3;
        vector<string>v;
        string a,b,c;
        a=s.substr(0,x);
        b=s.substr(x,x);
        c=s.substr(2*x,n-(2*x));
        v.pb(a);v.pb(b);v.pb(c);
        sort(v.begin(),v.end());
        cout << v[0] << " " << v[2] << " " << v[1] << endl;
    }

    return 0;
}