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
   // cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n,q; cin >> n >> q;
        map<int,int>m;
        while(q--){
            int e, x; cin >> e >> x;
            if(e==1){
                m[x]++;
            }
            if(e==2){
                m[x]+=2;
            }
            if(e==3){
                if(m[x]>1) cout << "Yes\n";
                else cout << "No\n";
            }
        }
    }

    return 0;
}