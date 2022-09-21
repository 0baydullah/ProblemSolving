#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n;cin >> n;
        set <int> s;

        for(int i=2 ; i*i<=n ;i++)
        {
            if(n%i ==0 && !s.count(i))
            {
                s.insert(i);
                n/=i;
                break;
            }
        }
        for(int i=2 ;i*i <= n ; i++)
        {
            if(n%i == 0 && !s.count(i))
            {
                s.insert(i);
                n/=i;
                break;
            }
        }

    if ((s.size()) < 2 || s.count(n) || n==1)
        cout << "NO" << endl;
    else
    {
        cout<< "YES" << endl;
        s.insert(n);
        for(auto u : s)cout<< u << " ";
        cout << endl;
    }

    }

    return 0;
}
