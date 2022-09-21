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
    int a[n],b[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];
    for(int i=0 ; i<n ; i++) cin >> b[i];
    vector<int>mx,mn;
    int ind=0;
    for(int i=0 ; i<n; i++){
        while(ind<n and a[i]>b[ind]) ind++;
        mn.pb(b[ind]-a[i]);
    }
    for(int i=0 ; i<n ; i++) cout << mn[i] <<" ";
    cout << endl;
    
    ind = n-1;
    for(int i=n-1; i>=0 ; i--){
        mx.pb(b[ind]-a[i]);
        if(a[i]>b[i-1]) ind=i-1;
    }
    reverse(mx.begin(),mx.end());
    for(auto u:mx) cout << u << " ";
    cout << endl; 
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