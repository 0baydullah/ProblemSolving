#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int x;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int p{0},cnt{0}, n;
    cin >> n;
    while (n--)
    {

        cin >> x;
        if (p+x < 0) cnt++;
        else p += x;
    }
    cout << cnt;

    return 0;
}
