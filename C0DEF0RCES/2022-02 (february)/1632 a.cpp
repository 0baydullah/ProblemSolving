#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(n>=3) cout << "NO" << endl;
        else
        {
            if(n==2 && s[0]==s[1]) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}
