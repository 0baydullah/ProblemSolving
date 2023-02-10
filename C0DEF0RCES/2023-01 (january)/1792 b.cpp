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
        int a,b,c,d; cin >> a  >> b >> c >> d;
        if(d==0 and b==0 and a==0 and c==0 ) {
            cout << 0 << endl;
        }
        else if(a==0) {
            cout << 1 << endl;
        }
        else{
            if(d==0) {
                if(a!=0 and b!=0)cout << a+min(b,c)+1 << endl;
                else{
                    if(b==0 and c==0) cout << a << endl;
                    else if(a>=max(b,c)) cout << a+ max(b,c)+1 << endl;
                    else cout << a+max(b,c) << endl; 
                }
            }
            else {
                cout << (min(a,d)*2)+(min(c,b)*2) +1 << endl;
            }
        }
    }

    return 0;
}