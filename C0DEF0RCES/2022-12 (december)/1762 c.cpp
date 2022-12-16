#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

#define mod 998244353 

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll n; cin >> n;
        string s ; cin >> s;
        ll ans{1},cons{1};

        for(int i=1 ; i<n; i++){
            if(s[i]==s[i-1])
                cons+=cons;
            else cons =1;
            cons%=mod;
            ans+=cons;
            ans%=mod;
        }
        cout << ans <<endl;
    }

    return 0;
}