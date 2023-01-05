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
        int n, k; cin >> n >> k;
        int x=n,y=1;
        for(int i=0 ; i<n; i++){
            if(i&1){
                cout << y << " ";
                y++;
            }else {
                cout << x << " ";
                x--;
            }
        }
        cout << endl;
    }

    return 0;
}