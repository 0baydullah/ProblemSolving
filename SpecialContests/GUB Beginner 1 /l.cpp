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
        vector<int>u(n),v(n);
        int mx{0};
        for(int i=0 ; i<n; i++){
            cin >> v[i];
            mx=max(mx,v[i]);
        } 
        int val = v[n-1];ll cnt{0};
        for(int i=n-1 ; i>=0 and val!=mx ; i--){
            if(v[i]>val){
                val=v[i];
                cnt++;
            }
        }
        
        cout << cnt << endl;
    }

    return 0;
}