/// 432 a

#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n , k;
    cin >> n >> k;
    int cnt{0},x;
    x = 5 - k;
    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
        if(a[i] <= x) cnt++;
    }
    cout << cnt/3 << fuckl;

    return 0;
}
