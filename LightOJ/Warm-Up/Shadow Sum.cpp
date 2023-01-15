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
        int n; cin >> n;
        int a[n],sum=0;
        map<int,int>m;    
        for(int i=0 ; i<n; i++) cin >> a[i];
        for(int i=n-1 ; i>=0 ; i--){
            m[abs(a[i])]++;
            if(m[abs(a[i])]==1) sum+=a[i];
        }
        cout << sum << endl;
    }

    return 0;
}