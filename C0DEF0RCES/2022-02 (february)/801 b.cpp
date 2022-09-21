///// https://codeforces.com/problemset/problem/801/B

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
        string a,b,c;cin >> a >> b;
        int n = a.size(),flag{0};
        for (int i=0; i<n  ;i++ )
            if(a[i]<b[i])
                return cout<< -1,0;
        cout << b;

    }

    return 0;
}
