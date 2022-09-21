#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

     while(1)
    {
        int n; cin >> n;
        if(n==-1) return 0;
        ll sum{0};
        int a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        int avg= sum/n;ll cnt{0};
        if(avg*n!=sum) cout << -1 << endl;
        else
        {
            for(int i=0 ; i<n ;i++)
            {
                if(a[i]>avg) cnt +=a[i]-avg;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
