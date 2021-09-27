#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t;cin >> t ;while (t--)
    {
        int h,n,m;
        cin >> h >> n >> m;
        int tdm = m*10;
        while(h>tdm && n)
        {
            h = h/2+10;
            n--;
        }
        if(h<=tdm) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

