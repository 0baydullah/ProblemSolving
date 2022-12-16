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
        int n, m; cin >> n >> m;
        int a[m];
        for(int i=0 ; i<m ;i++) cin >> a[i];
        sort(a,a+m);
        if(a[0]==1 or a[m-1]==n) cout << "NO\n";
        else{
            for(int i=0 ;i<m-2 ;i++)
                if(a[i]+2==a[i+1]+1 and a[i]+2== a[i+2]){
                    cout << "NO\n";
                    return 0;
                }
            cout << "YES\n";
        }
    }

    return 0;
}