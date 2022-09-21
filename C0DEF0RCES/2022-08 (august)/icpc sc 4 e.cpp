#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

//ll t; cin >> t; while(t--)
    {
        string a, b; cin >> a >> b;
        if(a==b) cout << "=" << endl;
        else if(a.size()==b.size())
        {
            if(a>b) cout << ">" << endl;
            else cout << "<";
        }
        else{
            if(a.size()>b.size()) cout << ">";
            else cout << "<" << endl;
        }
    }

    return 0;
}
