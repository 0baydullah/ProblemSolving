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
    string s; cin >> s;
    if(n!=5) {
        cout << "NO" << endl;
        return;
    }
    vector<int>a(26,0);
    int tt{0};
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]=='T') tt++;
        else
        a[s[i]-'a']++;
    }
    if(tt==1 and a[8]==1 and a[12]==1 and a[20]==1 and a[17]==1 ) cout << "YES" << endl;
    else cout << "NO" << endl;
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