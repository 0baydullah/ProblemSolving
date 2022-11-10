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
        vector<int>a(n),b(n+1);
        for(int i=0 ; i<n ;i++) cin >> a[i];
        b[0]=a[0],b[n]=a[n-1];
        for(int i=1 ; i<n ; i++)
            b[i]=lcm(a[i-1],a[i]);
        bool key=true;
        for(int i=1 ; i<=n ; i++){
            if(gcd(b[i],b[i-1])!= a[i-1]){
                key=false;
                break;
            }
        }
        if(key) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}