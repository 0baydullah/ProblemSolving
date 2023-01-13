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
      cout << "Case " << t << ": " << endl;
        int x1 , y1 ,x2,y2;
        cin >> x1>> y1>> x2>>y2;
        int q; cin >> q;
        for(int i=0 ; i<q ; i++){
            int a,b;cin >> a >> b;
            if(a>=x1 and a<=x2 and b>=y1 and b<= y2)
                cout << "Yes\n";
            else cout << "No\n";
        }
    }

    return 0;
}