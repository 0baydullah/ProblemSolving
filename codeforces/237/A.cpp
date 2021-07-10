#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int  n,ans{1};
    cin >> n;
    int t =n;
    map <pair<int,int> , int> m;
    while(n--)
    {
        int x; int y;
        cin >> x >> y;
        m[{x,y}]++;
    }
    for(auto u : m)
    {
        ans = max(ans,u.second);
    }
    cout << ans;
return 0;
}
