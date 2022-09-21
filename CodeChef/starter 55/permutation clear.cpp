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
    int n; cin >> n;
    map<int,int>m;
    vector<int>v;
    for(int i=0 ; i<n ;i++){
        int a[i];cin >> a[i];
        m[a[i]]++;
        v.pb(a[i]);
    }
    int k; cin >> k;
    for(int i=0 ; i<k ; i++){
        int x; cin >> x;
        m[x]++;
    }
    for(auto u:v){
        if(m[u]==1) cout << u << " ";
    }cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}