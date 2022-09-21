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
        int n , r , b;
        cin >> n >> r >> b;
        int sp=ceil(n/b);
        vector<char> v(n,'R');
        for(int i=sp ; i<n ; i+=sp)
        {
            v[i]='B';
        }
        for(auto x:v) cout << x;
        cout << endl;
    }

    return 0;
}
