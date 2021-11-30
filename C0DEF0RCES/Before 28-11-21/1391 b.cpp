#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int n,m,ans{0};
        cin >> n>> m;
        int x=n-1;
        while(x--)
        {
            string s; cin >> s;
            if(s[m-1]=='R')ans++;
        }
        string s; cin >> s;
        for(int i=0 ; i<m ; i++) if (s[i]=='D')ans++;
        cout << ans<<endl;
    }

    return 0;
}
