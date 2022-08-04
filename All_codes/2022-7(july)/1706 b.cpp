#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {

        int n;
        cin>>n;
        vector<int>v[n+4];
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            v[x].push_back(i);
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()<=1)cout<<v[i].size()<<" ";
            else
            {
                int cnt=1;
                for(int j=1;j<v[i].size();j++)
                {
                    int gap=v[i][j]-v[i][j-1];
                    gap--;
                    if(gap%2==0)cnt++;
                }
                cout<<cnt<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}
