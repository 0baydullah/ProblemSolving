#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
 int t;
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    for (int i=0 ; i< n ; i++)
    {
        cin >> a[i];
        if (a[i]==1) t++;
    }
    cout << t << endl;
    for (int i=0 ; i< n-1 ; i++)
    {
        if(a[i]>= a[i+1])
            cout <<a[i] << " ";
    }
cout << a[n-1];

    return 0;
}
