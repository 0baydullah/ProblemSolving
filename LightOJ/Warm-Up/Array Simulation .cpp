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
      cout << "Case " << t << ": \n";
        int n,m; cin >> n >> m;
        vector<int>a(n);
        for(int i=0 ; i<n; i++) cin >> a[i];
        while(m--){
            char x; cin >> x;
            if(x=='S'){
                int k; cin >> k;
                for(int i=0 ; i<n; i++) a[i]+=k;
            }
            if(x=='M'){
                int k; cin >> k;
                for(int i=0 ; i<n; i++) a[i]*=k;
            }
            if(x=='D'){
                int k; cin >> k;
                for(int i=0 ; i<n; i++) a[i]/=k;
            }
            if(x=='P'){
                int k,l; cin >> k>>l;
                swap(a[k],a[l]);
            }
            if(x=='R'){
                reverse(a.begin(),a.end());
            } 
        }
        for(auto i:a) cout << i << " ";
        cout << endl;
    }

    return 0;
}