#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
    ll t; cin >> t ;
    while (t--)
    {
        ll n,a,b;
        cin >> n;
        b= n*2/3;
        a= (n-b);
        ll B = b/2;
       // if(a+B*2==n)cout << a << ' ' << B << endl;
        if(a+B*2 == n)
         cout << a << ' ' << B << endl;
     else {
        swap(a,B);
        cout << a << ' ' << B << endl;
     }
    }
}