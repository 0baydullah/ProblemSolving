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
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0 ; i<n; i++) cin >> a[i];
        for(int i=0 ; i<m; i++) cin >> b[i];
        sort(a,a+n);
        for(int i=0 ; i<m ;i++){
            cout << upper_bound(a,a+n,b[i])-a << " ";
        }
        cout << endl;

    }

    return 0;
}