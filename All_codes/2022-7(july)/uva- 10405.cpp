#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

string s , w;
int dp[1001][1001];

int lcs(int i , int j)
{
    int n=s.size();
    int m=w.size();
    if(i==n or j==m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans{0};
    if(s[i]==w[j])
    {
      ans=1 + lcs(i+1,j+1);
      return ans;
    }

    return dp[i][j]= max(lcs(i+1,j),lcs(i,j+1));

}

int main()
{
    while(getline(cin,s),getline(cin,w))
    {
        memset(dp,-1,sizeof(dp));
        cout << lcs(0,0) << endl;
    }
    return 0;
}

