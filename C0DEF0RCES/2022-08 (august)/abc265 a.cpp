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
        int x,y,n; cin >> x >> y >> n;
        int Y=n/3 ,X=n%3;
        if(3*x > y) cout << (Y*y)+(x*X) <<endl;
        else cout << n*x << endl;
    }

    return 0;
}
