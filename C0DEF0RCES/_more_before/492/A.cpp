#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,i;
    cin >> n;
    int cnt {0};
    for( i=1 ; n>=0 ; i++)
    {
        n = n-(((i+1) *i)/2);
        cnt++;
    }
        cout << cnt-1;

    return 0;
}