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
    for(int tt=1 ; tt <= T ; tt++){
    //  cout << "Case " << t << ": ";
        string s; cin >> s;
        string t=s;
        sort(s.begin(),s.end());
        char x = s[0]; bool flag=1;
        cout << x << " ";
        for(int i=0 ; i<t.size() ; i++){
            if(t[i]==x and flag){
                flag=0;
            }else cout << t[i];
        }cout << endl;
    }

    return 0;
}