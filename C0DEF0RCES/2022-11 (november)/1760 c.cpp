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
        int mx=0,mx2=0;
        int a[n];
        for(int i=0 ; i<n; i++){
            cin >> a[i];

            if(a[i]>mx2 and a[i]<=mx){
                mx2=a[i];
            }
            if(a[i]>mx){
                mx2=mx;
                mx=a[i];
            }
        }
        for(int i=0 ; i<n; i++){
            if(a[i]==mx){
                cout << a[i]-mx2 << " ";
            }
            else cout << a[i]-mx << " ";
        }
     //   cout << "-------" << mx <<" " << mx2;
        cout<< endl;
        
    }

    return 0;
}