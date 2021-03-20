#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n, k, cnt{0};
    cin >> n >> k;
    for (int i = 1 ; i<=n ; i++)
    {
        k +=(5*i);
        if (k<=240)
            cnt++;
    }
    cout<<cnt;

    return 0;
}
