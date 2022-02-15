#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

void rev(int n)
{
    if (n==0) return;
    n--;
    int x; cin>> x;
    rev(n);
    cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        rev(n);
    }

    return 0;
}
