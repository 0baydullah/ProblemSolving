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
        ll n,m; cin >> n >> m;
        ll tmpN =n;
        ll cnt2=0,cnt5=0;
        
        while(tmpN%2==0){
            tmpN/=2;
            cnt2++;
        }
        while(tmpN%5==0){
            tmpN/=5;
            cnt5++;
        }

        ll mul=1;
        if(cnt5>cnt2){
            int p=cnt5-cnt2;
            while(p--){
                if(mul*2LL<=m){
                    mul*=2LL;
                }else break;
            }
        }else{
            int p=cnt2-cnt5;
            while(p--){
              if(mul*5LL<=m){
                mul*=5LL;
              }
              else break;
            }
        }
        while(1){
            if(mul*10LL<=m)
                mul*=10LL;
            else break;
        }
        mul = (m/mul)*mul;
        ll ans = n*mul;
        cout << ans << endl;
    }


    return 0;
}