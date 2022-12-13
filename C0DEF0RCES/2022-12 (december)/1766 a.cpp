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
        ll n; cin >> n;
        ll cnt=0,r;
        if(n<11) cout << n << endl;
        else{
            while(n){
                r=n%10;
                n/=10;
                
                cnt++;
            }
            cout << ((cnt-1)*10)+r-(cnt-1) << endl;
        }
        
    }

    return 0;
}