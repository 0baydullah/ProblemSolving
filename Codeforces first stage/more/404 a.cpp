#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n;
    cin >> n;
    char a[n][n];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin >> a[i][j];
        }
    }
    char d= a[0][0],o = a[0][1];
    if(d==o) {cout << "NO"; return 0;}
     for(int i=0 ,l=1; i<n ; i++,l++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i==j || j == n-l)
            {
                if(a[i][j] != d) {cout << "NO" ; return 0;}
            }
        }
    }
     for(int i=0 ,l=1; i<n ; i++,l++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i!=j && j != n-l)
            {
                if(a[i][j] != o) {cout << "NO" ; return 0;}
            }
        }
    }
    cout << "YES" ;

    return 0;
}
