#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n];
        int cnt{0};
        cin >> a[0];
        for(int i=1 ; i<n-1 ; i++)
        {
            cin >>a[i];

        }
        for(int i=0 ; i<n-1; i++)
        {
            if(a[i]<a[i+1])
                cnt ++;
        }
        cout << cnt+1 << endl;
    }

    return 0;
}
