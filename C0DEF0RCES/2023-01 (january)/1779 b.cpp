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
        if(n==3) {cout << "NO\n";continue;}
        else cout << "YES\n";
        if(n&1){
            int x=n/2-1;
            for(int i=0 ; i<n/2 ; i++){
                cout << x<<" "<<-(x+1) << " ";
                
            }cout << x <<endl;
        }else{
            for(int i=0 ; i<n/2 ; i++)
            cout << "69 -69 ";
        }
        cout << endl;
    }

    return 0;
}