#include<bits/stdc++.h>
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int cnt{0};
        string a,s;
        cin >> a >> s;
        map<char,int> mp;
        for(int i=0 ; i<a.size() ; i++)
        {
            mp.insert({a[i],i+1});
        }
        for(int i=0 ;i<s.size() -1 ; i++)
        {
          cnt +=   abs(mp[s[i+1]]-mp[s[i]] );
        }

        cout << cnt << endl;
    }
}
