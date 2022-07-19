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

        int ev[26]={0},od[26]={0};
        int n; cin >> n;
        string s; cin >> s;
        for(int i=0 ; i<s.size() ; i++)
            if(i&1)
                od[s[i]-'a']++;
            else ev[s[i]-'a']++;
        int key{0};
        for(int i=0 ; i<26 ; i++)
            if(ev[i]!=od[i])
            {
                key=1;
            }
        if(!key) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
