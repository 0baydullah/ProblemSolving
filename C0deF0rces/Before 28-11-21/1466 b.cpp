#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        int n,mx{0} , cnt{0};
        cin >> n;
        while(n--)
        {
            int x; cin >> x;
            if(x>mx)
            {
                mx=x;
                cnt++;
            }
            else if(x==mx)
            {
                x++;
                mx=x;
                cnt++;
            }
        }
            cout << cnt << endl;
    }

    return 0;
}
