#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;



int main()
{
    int a ,b;
    cin >> a >> b;
    int m = max(a,b);

    int p = 6-m+1;

    cout << p/gcd(p,6) << "/" << 6/gcd(p,6);

    return 0;
}