#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int flag{1};
        int n; cin >> n;
        int a[n];
        for (int i=0  ;i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i=0  ;i < n-1 ; i++)
        {
            if(a[i+1] - a[i] > 1) {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
    }

    return 0;
}
