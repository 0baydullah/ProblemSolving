#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
   // int t;cin >> t ;while (t--)
    {
        int n,cnt{0}; cin >> n ;
        map <string,int> m;
        string s , ans; cin >> s;
        for (int i=0; i<s.size(); i++)
        {
            string x = s.substr(i,2);
            m[x]++;
            if(m[x]>cnt) {cnt = m[x]; ans = x;}
        }
        cout << ans << endl;
    }
}
