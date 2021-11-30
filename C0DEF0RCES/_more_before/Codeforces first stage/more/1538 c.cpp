#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t ;
    while(t--)
    {
        long long n,l,r,cnt{0};
        cin >> n >> l >> r;
        int a[n];

        for (int i=0 ; i<n ; i++) cin >> a[i];
        sort (a, a+n);

        for (int i=0 ; i<n-1 ; i++)
        {
            for (int j=i+1 ; j<n ; j++)
            {
                if (i<j)
                    if(a[i]+a[j] >= l && a[i]+a[j] <= r) cnt++;
            }
        }


            cout << cnt << endl;

    }

    return 0;
}
