#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
ll dp[35];

ull cat(int n)
{
    if(dp[n]!=-1) return dp[n];
    if(n<=1) return 1;
    ull res =0;
    for(int i=0 ; i<n ; i++)
        res+= cat(i)*cat(n-i-1);
    return dp[n]=res;
}


int main()
{
  //  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    memset(dp,-1,sizeof(dp));
    {
        for(int i=0 ; i<40 ; i++)
            cout << i << " >>> " <<(ull)cat(i) << endl;

    }

    return 0;
}
