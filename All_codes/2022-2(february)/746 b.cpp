#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        int n;
        cin >> n;
        string s; cin >> s;
        string a,b;
        for(int i = n-1 ; i>=0 ; i-=2)
            a+= s[i];
        for(int i = n-2 ; i>=0 ; i-=2)
            b+= s[i];
        reverse(a.begin(),a.end());
        cout << b << a << endl;

    }

    return 0;
}
