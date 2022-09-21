#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

string a,b;
int n,m;
int dp[101][101];

int lcs(int i , int j)
{
    if(i>=n or j>= m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ret=0;
    if(a[i]==b[j]) ret= 1+ lcs(i+1,j+1);
    else ret = max(lcs(i+1,j),lcs(i,j+1));
    return dp[i][j]=ret;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t=1; while(getline(cin,a))
    {
        memset(dp,-1,sizeof(dp));
        n=a.size();
        if(n==1 && a[0]=='#') return 0;
        getline(cin,b);
        m=b.size();
        int ans = lcs(0,0);
        printf("Case #%d: you can visit at most %d cities.\n",t,ans);
        t++;
    }

    return 0;
}
