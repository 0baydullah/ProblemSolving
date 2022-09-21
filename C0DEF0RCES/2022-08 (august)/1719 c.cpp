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
        int n,q; cin >> n >> q;
        deque<int>dq;
        for(int i=0 ; i<n; i++)
        {
            int x; cin >> x;
            dq.push_back(x);
        }
        int cnt{0};
        while(q--)
        {
            int I,k; cin >> I  >> k;
            int mp=*dq.begin()+I;
            while(k--)
            {
                int x=dq.front();
                dq.pop_front();
                int y= dq.front();
                dq.pop_back();
                if(x>y)
                {
                    dq.push_front(x);
                    dq.push_back(y);
                    if(x==mp)cnt++;
                }
                else
                {
                    dq.push_front(y);
                    dq.push_back(x);
                    if(y==mp)cnt++;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
