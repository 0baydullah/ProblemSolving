#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i = 0 ; i < n ; i++)
        {
                cin >> a[i];
                b[i] = a[i];
        }

        sort(b,b+n);

        int cnt{0};
        for (int i = 0 ; i < n ; i++)
        {
            if (a[i] != b[i]) cnt++;
        }
        cout << cnt/2 << endl;
    }

    return 0;
}
