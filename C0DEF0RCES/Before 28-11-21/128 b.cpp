#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll d , n , sum{0}; cin >>d >> n;

    for(int i=0 ; i<n-1 ; i++)
    {
        int x; cin >> x;
        sum += d-x;
    }
    cout << sum << endl;

    return 0;
}
