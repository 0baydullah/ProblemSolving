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
        string s; cin >> s;
        int p; cin >> p;
        string w=s;
        sort(w.rbegin(),w.rend());
        int cost=0;
        for(int i=0 ; i<s.size() ; i++)
            cost += w[i]-'a'+1;
        map<char,int> del;
        for(int i=0 ; i<w.size() ;i++)
            if(cost > p)
            {
                del[w[i]]++;
                cost -= w[i]-'a'+1;
            }
        for(int i=0 ; i<s.size() ; i++)
        {
            if(del[s[i]] >0)
            {
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
