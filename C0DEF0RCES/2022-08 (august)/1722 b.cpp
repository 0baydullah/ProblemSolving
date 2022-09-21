#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    int n; cin >> n;
    string s,t;
    cin >> s >> t;
    int key=0;
    for(int i=0 ; i<n; i++){
        if(s[i]==t[i] or (s[i]=='G' and t[i]=='B') or (s[i]=='B' and t[i]=='G') )
        {
            key=1;
        }
        else{
            cout << "NO" << endl;
            return;
        }
        
    
    }
    if (key) cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}