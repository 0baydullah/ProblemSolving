#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int x=9;
        vector<int> v;
        while(n)
        {
            if(n>x)
                v.pb(x),n-=x , x--;
            else v.pb(n),n=0;
        }
        for(int i=v.size()-1 ; i>=0 ; i--)
            cout << v[i];
        cout << endl;
    }

    return 0;
}
