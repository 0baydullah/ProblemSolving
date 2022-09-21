#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int arr[1000000];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int sum{0};
        for(int i=0 ; i<n ; i++)
        {
            int x; cin >> x;
            sum += x;
            arr[i] = sum;
        }
        int a,b;
        cin >> a >> b;
        cout << arr[b]-arr[a-1];
    }

    return 0;
}
