#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

bool isPrime(int n);

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    int ans = (1*2)+(n*2);

    for(int i=1 ; i<=n/2 ; i++)
        if(n%i == 0)
            ans = min(ans,((i*2)+(n/i)*2));
    cout << ans;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

