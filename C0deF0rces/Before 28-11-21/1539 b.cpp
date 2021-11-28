#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n , q;
    cin >> n >> q ;
    string s; cin >> s;
    vector < int > v(n+1);
    int sum =0;
    for( int i= 0 ; i< n ; i++)
    {
       sum += s[i]-96;
         v[i+1] = sum;
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << v[r]-v[l-1] << endl;
    }

    return 0;
}
