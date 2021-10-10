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
        int n,k;
        cin >> n >> k;
        int extra = min(n%k,k/2);
        int x = n/k;
        cout << x*k+extra << endl;
    }
}


