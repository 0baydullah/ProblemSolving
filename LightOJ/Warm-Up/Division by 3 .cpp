#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int func(int n){
    int sub;
    if(n%3==0) sub=n/3;
    else sub=n/3+1;
    return n-sub;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int a,b ;cin >> a >> b;
        cout << func(b)-func(a-1) << endl;
    }

    return 0;
}