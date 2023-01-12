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
    //ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        ll n; cin >> n;
        ll x = ceil(sqrt(n*1.0));
        ll lack = x*x - n;
        ll r,c;
        if(lack<x){
            r=x;
            c=lack+1;
        }
        else{
            c=x;
            r=n-(x-1)*(x-1);
        }
    if(~x&1){
        swap(r,c);
    }
        cout << c << " " << r << endl;
    }

    return 0;
}