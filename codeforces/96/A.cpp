#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int x =0;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    string a;
    cin >> a;
    for(int i = 0 ; i< a.size()-6 ; i++)
    {
        if (a.size()<7)
        {
             cout << "NO" << endl;
             x=5;
              break;
        }
        else if (a[i]== a[i+1] && a[i]== a[i+2] && a[i]== a[i+3] && a[i]== a[i+4] && a[i]== a[i+5] && a[i]== a[i+6])
        {
            cout << "YES" << endl;
            x=10;
            break;
        }
       // else cout << "NO" << endl;
    }
    if(x == 0)
    {
         cout << "NO" << endl;
    }
    return 0;
}
