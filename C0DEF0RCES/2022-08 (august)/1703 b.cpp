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
        int n; cin >> n;
        string S; cin >> S;
        set<char>s;
        for(auto x:S)
            s.insert(x);
        cout << s.size() + n << endl;
    }

    return 0;
}
