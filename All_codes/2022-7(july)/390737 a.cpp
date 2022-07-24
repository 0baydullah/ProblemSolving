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
        map<char,int> m;
        string s; cin >> s;
        for(int i=0 ; i<s.size() ; i++)
        {
            m[s[i]]++;
        }
        if(m['a']==m['b']) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
