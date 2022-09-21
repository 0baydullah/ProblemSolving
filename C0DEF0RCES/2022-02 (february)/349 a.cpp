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
        int n, _25{0} , _50{0},key{0};
        cin >> n;
        for(int i=0 ;i < n ; i++)
        {
            int x; cin >> x;
            if(x==25) _25++;
            else if(x==50)
            {
                _50++;
                _25--;
            }
            else
            {
                if(_50!=0)
                {
                    _50--;
                    _25--;
                }
                else
                {
                    _25 -= 3;
                }
            }

            if(_25 < 0) key =1;
        }
        if(key) cout << "NO";
        else cout << "YES";
    }

    return 0;
}
