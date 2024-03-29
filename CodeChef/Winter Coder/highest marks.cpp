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
        vector<int>v(10000009,0);
        for(int i=0 ; i<n; i++) cin >> a[i];
        int k ; cin >> k;
        int mx=0,smx=0;
        for(int j=0; j<j+k ; j++){
            mx=max(smx,a[j]);
            smx=max(smx,a[j]);
        }
        cout << mx << " ";
        for(int i=1 ;i<(n-k-1) ;i++){
            if(a[i-1 <smx])
            mx=max(smx,a[i+k]);
            smx=max(smx,a[i+k]);
        }
    }

    return 0;
}