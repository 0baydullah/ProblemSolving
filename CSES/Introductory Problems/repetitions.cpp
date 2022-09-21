#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

//    ll t; cin >> t; while(t--)
    {
        string s; cin >> s; int mx=1,cnt=1;
        for(int i=1 ; i<s.size() ; i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
                mx=max(mx,cnt);
            }
            else{
                cnt=1;
            }
        }
        cout << mx << endl;
    }

    return 0;
}
