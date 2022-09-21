#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku(int n)
{
    if(n%17==0) cout << 1 << endl; 
    else cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
   // cin >> T;
    while(1){
    //  cout << "Case " << t << ": ";
        ll n; cin >> n;
        if(n==0) return 0;
        else{
            if(n%17==0) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}