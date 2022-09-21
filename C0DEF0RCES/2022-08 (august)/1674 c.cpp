#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        string s, t; cin >> s >> t;
        if(t=="a") cout << 1 << endl;
        else if((count(t.begin(),t.end(),'a'))!=0) cout << -1  << endl;
        else cout << (ll)pow(2,s.size()) << endl;
    }

    return 0;
}
