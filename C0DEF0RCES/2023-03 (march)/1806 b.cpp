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
     int n,z=0,nz=0;
     cin >> n;
     vector<int>a(n);
     for(int i=0 ; i<n ;i++){
        cin >> a[i];
        if(a[i]==0) z++;
        else nz++;
     }
     int ans;
     if(z==0)ans=0;
     else{
        if(nz>=z-1) ans=0;
        else{
            int mx=*max_element(a.begin(),a.end());
            if(mx==1) ans =2;
            else ans=1;
        }
        
     }
        cout << ans << endl;
    }

    return 0;
}