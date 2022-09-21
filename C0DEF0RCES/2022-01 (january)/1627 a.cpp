#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n , m , r , c;
        int val=-1, key{0};

        cin>> n >> m >> r >> c;
        r--,c--;
        char a[n][m];
        for(int i=0 ; i< n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                cin >> a[i][j];

                    if (a[i][j]=='B') key =1;
            }
        }
        if(key)
        {
            for (int i=0 ; i < n ; i++)
                if(a[i][c]=='B')val = 1;
            for (int i=0 ; i < m ; i++)
                if(a[r][i]=='B')val = 1;

            if(a[r][c]=='B') val =0;

            if(val==1) cout << 1 << endl;
            else if (val == 0) cout << 0 << endl;
            else cout << 2 << endl;
        }
        else cout << val << endl;
    }

    return 0;
}
