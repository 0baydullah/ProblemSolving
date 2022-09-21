#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    vector<int>set1,set2;
    int n; cin >> n;
    ll sum = n*(n+1)/2;
    if(sum%2==0){
        if(n%4==0){
            cout << "YES" << endl;
            for(int i=1 ; i<=n/4 ; i++) set1.pb(i);
            for(int i=n-(n/4)+1 ; i<=n ; i++) set1.pb(i);
            for(int i=n/4+1 ; i<=(n-(n/4)) ; i++) set2.pb(i);
            cout << set1.size() << endl;
            for(auto u:set1) cout << u << " ";
            cout << endl;
            cout << set2.size() << endl;
            for(auto u:set2) cout << u << " ";
            cout << endl;
            return;
        }
        else if(n%4==3){
            cout << "YES" << endl;
            set1.pb(1);
            set1.pb(2);
            set2.pb(3);
            int x=n/4;
            int m = n-3;
            for(int i=4 ; i<=3+x ; i++) set1.pb(i);
            for(int i=4+x ; i<=(n-(m/4)) ; i++) set2.pb(i);
            for(int i=n-(m/4)+1 ; i<=n ; i++) set1.pb(i);
            cout << set1.size() << endl;
            for(auto u:set1) cout << u << " ";
            cout << endl;
            cout << set2.size() << endl;
            for(auto u:set2) cout << u << " ";
            cout << endl;
            return;
        }
    }
    cout << "NO" << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
  //  cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}