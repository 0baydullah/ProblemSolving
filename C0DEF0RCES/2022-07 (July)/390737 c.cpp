#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        ull x; cin >> x;
        string s= to_string(x);
        int n= s.size();
        string t;
        for(int i=0 ; i< n ; i++)
            t.pb('1');
        ull _1 = stoull(t);
        for(int i=0 ; i<10 ; i++)
        {
            if(_1*i>=x)
            {
                cout <<(ull) _1*i <<endl;
                break;
            }
        }
    }

    return 0;
}
