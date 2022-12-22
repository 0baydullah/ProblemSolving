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
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        vector<pair<int,int>>a;
        for(int i=1 ; i<=n; i++){
            int x;cin>> x;
            a.pb({x,i});
        }
        vector<int>x(n+1,0);
        sort(a.rbegin(),a.rend());
        ll sum{0};
        for(int i=1 ; i<=n ; i++){
            x[a[i-1].second] = (i+1)/2*(i%2?1:-1);
            sum+=2LL*((i+1)/2)*a[i-1].first;
        }
        cout << sum << endl;
        for(auto i:x) cout << i << " ";
        cout << endl;
        
    }

    return 0;
}