#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        map<char,int>m;
        int n; cin >> n;
        string s; cin >> s;
        for(int i=0 ; i<s.size() ; i++)
            m[s[i]]++;
        cout<<min({m['c'],m['o'],m['d'],m['e'],m['r'],m['a'],m['m'],m['s']}) << endl;

    }

    return 0;
}
