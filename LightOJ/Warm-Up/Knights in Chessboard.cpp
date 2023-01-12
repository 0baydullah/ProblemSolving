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
        int n,m; cin >> n >> m;
        if(n==1 or m==1) cout << max(n,m) << endl;
        else if(n==2 or m==2)cout << ((n*m/8)*4)+min((n*m)%8,4) <<endl;
        else cout << (n*m+1)/2 <<endl;
    }

    return 0;
}