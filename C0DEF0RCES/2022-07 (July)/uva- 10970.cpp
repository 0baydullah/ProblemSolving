#include<bits/stdc++.h>
using namespace std;

int a,b,dp[305][305];
int cut(int a, int b)
{
    if(a>b)swap(a,b);
    if(b==1)return 0;
    if(dp[a][b]!=-1) return dp[a][b];
    return dp[a][b] = 1+cut(a,b/2)+cut(a,b-b/2);
}
int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
     while(cin >> a >> b)
     {
        memset(dp,-1,sizeof(dp));
        cout << cut(a,b) << endl;
     }

    return 0;
}
