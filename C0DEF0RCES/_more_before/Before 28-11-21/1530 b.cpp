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

         int r , c;

     cin >> r >> c;

      int a[r][c];

     for(int i = 0; i < r; i++)
     {
         for(int j = 0; j < c; j++)a[i][j] = 0;
     }

     for(int i = 0; i < c; i+=2)
     {
         a[0][i] = 1;
         a[r-1][i] = 1;
     }

     for(int i = 2; i < r-2; i+=2)
     {
         a[i][0] = 1;
         a[i][c-1] = 1;
     }

      for(int i = 0; i < r; i++)
     {
         for(int j = 0; j < c; j++)cout << a[i][j];

         cout << endl;
     }
         cout <<endl;
    }

    return 0;
}
