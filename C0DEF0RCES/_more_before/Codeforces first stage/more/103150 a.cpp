#include<bits/stdc++.h>
#define fuckl "\n"
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    long long t; cin >> t;
    while(t--)
    {
        long long n,k,total{0};
        cin >> n >> k;
        long long a[n];
        for(int i = 0 ; i<n ; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        for(int i = 0 ; i<n ; i++)
        {
            a[i] = total - a[i];
        }
        sort(a,a+n);
        cout << a[n-1] - a[0] << endl;
    }

    return 0;
}
