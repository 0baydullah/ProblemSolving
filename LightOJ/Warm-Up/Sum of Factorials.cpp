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
        ll fact[20];
        fact[0]=1;
        for(int i=1 ; i<=20 ;i++) fact[i]=fact[i-1]*i;
       // for(int i=0 ; i<20 ; i++) cout << fact[i] << " ";
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        vector<int>v;
        ll n ; cin >> n;
        for(int i=19 ; i>=0 ; i--){
            if(fact[i]<=n){
                n-=fact[i];
                v.pb(i);
            }
        }

        if(n) cout << "impossible\n";
        else{
            for(int i=v.size()-1 ; i>0 ; i--)
                cout  << v[i] << "!+";
            cout << v[0] << "!\n";
        }
    }

    return 0;
}