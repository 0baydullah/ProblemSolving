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

    double memo[1000001];
    memo[0] = 0;

    for(int i=1 ; i<1000001;i++)
        memo[i]=memo[i-1]+log(i);
    
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
     cout << "Case " << t << ": ";
        int n , b;
        cin >> n >> b;
        cout << int(memo[n]/log(b)+1) << endl;
    }

    return 0;
}