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
        string s; cin >> s;
        string s1="meow",s2="";
        for(int i=0 ; i<n ; i++){
            s[i]=tolower(s[i]);
            if(i>0){
                if(s[i]==s[i-1])continue;
            }s2+=s[i];
        }
        if(s1==s2) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}