#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    ll n; cin >> n;
    ll mul=1;
    
    int k; cin >>k;
    string s;cin >> s;

    if(k==n) cout << 2 << endl;
    else if(k&1){for(int i=0 ; i<n ; i++){  int m=1000000007;
             mul = ((mul%m)*2)%m;
    }
        cout << mul << endl;
    }
    else{for(int i=0 ; i<n-1 ; i++){  int m=1000000007;
             mul = ((mul%m)*2)%m;
    } cout << mul << endl;}
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}