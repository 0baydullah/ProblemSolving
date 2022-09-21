#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
int dp[100005];
void func(int x)
{
    if(x<0)return;
    int s=sqrt(2*x);
    s*=s;
    int l=s-x;
    func(l-1);
    for(;l<=x;l++,x--)
        dp[l]=x,dp[x]=l;
}
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        func(n-1);
        for(int i=0; i<n ; i++)
            cout << dp[i] << " ";
        cout << endl;
    }

    return 0;
}
