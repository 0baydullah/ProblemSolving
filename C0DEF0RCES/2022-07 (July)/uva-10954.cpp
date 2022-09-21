#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    //ll t; cin >> t; for(int T=1 ; T<=t ; T++)
    int n;
    while(1)
    {
        cin >> n;
        if(n==0)return 0;
        else
        {
            priority_queue<ll>q;
            for(int i=0 ; i<n ; i++)
            {
                ll inp; cin >> inp;
                q.push(-inp);
            }
            ll cost{0};
            while(q.size()!=1)
            {
                ll x,y;
                x=q.top();
                q.pop();
                y=q.top();
                q.pop();
                q.push(x+y);
                cost+=-(x+y);
            }
            cout << cost << endl;
        }
    }

    return 0;
}
