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
        int n; cin >> n;
        if(n<=2) cout << -1;
        else for(int i = n ; i>0 ; i--)
            cout << i << " ";
    }

    return 0;
}
