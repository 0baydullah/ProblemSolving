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
        int n; cin >> n;int key=1;
        string s; cin >> s;
        int cnt{0};
        for(int i=0  ; i<n ; i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
                cnt=0;
            else
            {
                cnt++;
                if(cnt>=4)
                {
                    cout << "NO\n";
                    key=0;
                    break;
                }
            }
        }
        if(key) cout << "YES\n";
    }

    return 0;
}
