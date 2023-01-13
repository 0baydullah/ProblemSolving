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
        int a,b,c,d; cin >> a>> b >> c >> d;
        if(abs(a-c)==abs(b-d)) cout << 1 << endl;
        else if((abs(a-c)&1)==(abs(b-d)&1)) cout << 2 << endl;
        else cout << "impossible\n";
    }

    return 0;
}