#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n ,  c0 , c1 , h , one=0 , zero=0;
        string s;
        cin >> n >> c0 >> c1 >> h >> s;
        for(auto u : s)
        {
            if(u=='1') one++;
            else zero++;
        }
        int ans,ans0,ans1;
        ans = (c0*zero)+(c1*one);
        ans0 = (n*c1)+(h*zero);
        ans1 = (n*c0)+(h*one);

        cout << min({ans,ans1,ans0})<<endl;
    }
    return 0;
}
