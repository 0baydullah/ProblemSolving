#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
 int total,take,cnt=0;
int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int coin[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> coin[i];
        total += coin[i];
    }
    sort(coin,coin+n,greater <int> ());
    for(int i = 0 ; i < n ; i++)
    {
        take += coin[i];
        cnt++;
        if (take > total/2)
        {
            cout << cnt << endl;
            break;
        }
    }

    return 0;
}
