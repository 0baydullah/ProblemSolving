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
        int n; cin >>n;
        vector<int> a(n+1);
        vector<ll>pref(n+1,0);
        for(int i=1 ; i<n+1 ;i++){
            cin >> a[i];
            pref[i]=pref[i-1]+a[i];
        }

        map<ll,int>m;
        int mx=0 , ans=0;

        for(int i=n ; i>0 ; i--){
            m[pref[i]]++;
            mx=max(mx,m[pref[i]]);
            if(a[i]==0){
                ans+=mx;
                mx=0;
                m.clear();
            }
        }
        ans+=m[0];
        cout << ans << endl;
    }

    return 0;
}