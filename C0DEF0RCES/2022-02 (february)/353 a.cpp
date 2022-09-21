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
        int a,b,suma{0},sumb{0},key{0};
        for(int i=0 ;i < n ; i++)
        {
            cin >> a >> b;
            suma += a;
            sumb += b;
            if(a%2!=b%2) key=1;
        }
        if(suma%2 == 0 && sumb%2 == 0) cout << 0 ;
        else if ((suma%2 == 1) && (sumb%2 == 1) && n>1 && key) cout << 1 ;
        else cout << -1;
    }

    return 0;
}
