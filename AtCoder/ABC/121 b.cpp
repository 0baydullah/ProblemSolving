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
        int n, m,c,cnt=0; cin >> n >> m>>c;
        int a[m];
        for(int i=0 ; i<m ; i++) cin >> a[i];
        for(int i=0 ; i<n ; i++){
            int sum=0;
            for(int j=0 ;j<m; j++){
                int x; cin >> x;
                sum+=x*a[j];
            }
            sum+=c;
            if(sum>0)cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}   