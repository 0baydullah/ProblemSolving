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
        int n, a, b , c , d;
        cin >> n >> a >> b >> c >> d;
        n+=1;; int sum = a+b+c+d;
        if(n>sum*2) cout << "No\n";
        else cout << "Yes\n";
    }

    return 0;
}
