#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        string s; cin >> s;
        int digit = s.size();
        ll ans = (1<<digit)-2;
        for(int i=digit-1,j=0; i>=0 ; i--,j++)
        {
            if(s[i]=='7') ans+=1<<j;
        } cout << ans+1 << endl;
    }

    return 0;
}
