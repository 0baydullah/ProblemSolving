#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    n%2 == 0 ? cout << "8 " << n-8 : cout << "9 " << n-9;

    return 0;
}
