#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int x,y;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n ;
    int a[n], b[n-1], c[n-2];
    for(int i=0  ; i<n ; i++)
    {
        cin >> a[i];
    }
    for(int i=0  ; i<n-1 ; i++)
    {
        cin >> b[i];
    }
    for(int i=0  ; i<n-2 ; i++)
    {
        cin >> c[i];
    }

    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    for(int i=0  ; i<n-1 ; i++)
    {
        if(a[i] != b[i])
        {
            cout << a[i] << endl;
      x = 10;
            break;
        }

    }
    if (x != 10)
         cout << a[n-1] << endl;
    for(int i=0  ; i<n-1 ; i++)
    {
        if(b[i] != c[i])
        {
            cout << b[i] << endl;
          y = 10;
            break;
        }

    }
    if (y != 10)
         cout << b[n-2] << endl;

    return 0;
}
