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
        ll l , r , x;
        cin >> l >> r >> x;
        ll a , b; 
        cin >> a >> b;
        if(a==b){
            cout << 0 << endl;
            continue;
        }
        if(abs(b-a)>=x){
            cout << 1 << endl;
            continue;
        }
        if(b>a){
            if(b+x<=r or a-x>=l){
                cout << 2 << endl;
            }else if(a+x<=r and  b-l>=x){
                cout << 3 << endl;
            }else cout << -1 << endl;
        }else{
            if(a+x<=r or b-x>=l){
                cout << 2 << endl;
            }else if(a-x>=l and r-b>=x){
                cout << 3 << endl;
            }else cout << -1 << endl;
        }
    }

    return 0;
}