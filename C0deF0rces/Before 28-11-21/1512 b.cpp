#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int x[4] , y[4];
        int it{0};
        int n; cin >> n;
        char a[n+1][n+1];
        int i,j;
        for( j= 1 ; j <= n ; j++)
        {
            for(i= 1 ; i<=n ; i++)
            {
                cin>> a[j][i];
                if(a[j][i]=='*')
                {
                    x[it]=j;
                    y[it]=i;
                    it++;
                }
            }
        }

        if (x[0]==x[1] && x[0]!= n) {
                a[x[0]+1][y[0]] = '*';
                a[x[1]+1][y[1]] = '*';
        }
        else if(x[0]==x[1] && x[0] == n) {
                a[x[0]-1][y[0]] = '*';
                a[x[1]-1][y[1]] = '*';
        }
        else if (y[0]==y[1] && y[0] != n) {
                a[x[0]][y[0]+1] = '*';
                a[x[1]][y[1]+1] = '*';
        }
        else if(y[0]==y[1] && y[0] == n) {
                a[x[0]][y[0]-1] = '*';
                a[x[1]][y[1]-1] = '*';
        }
        else {
            a[x[0]][y[1]] = '*';
            a[x[1]][y[0]] = '*';
        }
        for(int j= 1 ; j <= n ; j++)
        {
            for( int i= 1 ; i<=n ; i++)
            {
                cout << a[j][i];
            }
            cout<< endl;
        }
    }

    return 0;
}
