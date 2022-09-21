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
        int c{1},C{0};
        int w,h,n;
        cin >> w >> h >> n;
        if(w%2 == 1 && h%2 == 1 && n==1)
        {
             cout << "YES" << endl;
             continue;
        }
        while(w%2 == 0 || h%2 == 0)
        {
            if(w%2 == 0)
            {
                w = w/2;
                c = c*2;
                if(c>=n){
                    C=1;
                    cout << "YES" << endl;
                    break;
                }
            }
            else if(h%2 == 0)
            {
                h = h/2;
                c = c*2;
                if(c>=n){
                    C=1;
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        if(C==0) cout << "NO" << endl;
    }
}