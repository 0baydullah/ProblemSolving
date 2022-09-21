#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

string s;
string S;
int dp[1001][1001];

int mkpal(int i,int j)
{
    if(i>j )return 0;
    if(i==j)return 0;
    int ret=dp[i][j];
    if(ret!=-1)return ret;
    if(s[i]==s[j]) ret=mkpal(i+1,j-1);
    else ret=min(mkpal(i,j-1),mkpal(i+1,j))+1;
    return dp[i][j] = ret;
}

void mkstr(int l,int r)
{
    if(l>r) return;
    if(s[l]==s[r])
    {
        S.pb(s[l]);
        mkstr(l+1,r-1);
        if(l!=r) S.pb(s[l]);
    }
    else if(mkpal(l,r)==mkpal(l,r-1)+1)
    {
        S.pb(s[r]);
        mkstr(l,r-1);
        S.pb(s[r]);
    }
    else if(mkpal(l,r)==mkpal(l+1,r)+1)
    {
        S.pb(s[l]);
        mkstr(l+1,r);
        S.pb(s[l]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    while(getline(cin,s))
    {
        S.clear();
        memset(dp,-1,sizeof(dp));
        int en=s.size()-1;
        cout << mkpal(0,en) << " ";
        mkstr(0,en);
        cout << S << endl;
    }

    return 0;
}
