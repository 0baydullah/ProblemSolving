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
        int n, a, b , c , d;
        cin >> n >> a >> b >> c >> d;
        vector<string> s;
        for(int i=1 ; i<=n ; i++)
        {
            s.pb(to_string(i));
        }
        reverse(s.begin()+a-1,s.begin()+b);
        reverse(s.begin()+c-1,s.begin()+d);
        cout << s[0];
        for(int i=1 ;i<s.size() ; i++)
        {
            cout <<" " << s[i] ;
        }cout << endl;
    }

    return 0;
}

