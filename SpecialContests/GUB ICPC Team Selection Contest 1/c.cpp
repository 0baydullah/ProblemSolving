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
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        int cnt {0},a[n],GCD=0;
        for(int i=0 ; i<n; i++){
            cin >> a[i];
            GCD=gcd(GCD,a[i]);
        }
        for(int i=0 ; i<n; i++){
            
            a[i]/=GCD; 
            while(a[i]%3==0){
                a[i]/=3;
                cnt++;
            }

            while(a[i]%2==0){
                a[i]/=2;
                cnt++;
            }
            
            if(a[i]!=1){
                cout << -1 << endl;
                return 0;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}