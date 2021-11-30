#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt{0},miN;
        cin >> n;
        int day[n];
        for(int i = 0 ; i < n ; i++)
            cin >> day[i];
            miN = day[n-1];
        for(int i = n-2 ; i >= 0 ; i--)
            day[i] > miN ? cnt++ : miN = day[i];
        cout << cnt << endl;
    }

    return 0;
}
