#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
int oddC,evenC,oddK,evenK;
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    while(n--)
    {
        int x;
        cin >> x;
        if(x%2) oddC++;
        else evenC++;
    }
    while(m--)
    {
        int x;
        cin >> x;
        if(x%2) oddK++;
        else evenK++;
    }
    cout << min(oddC,evenK)+min(oddK,evenC);

    return 0;
}
