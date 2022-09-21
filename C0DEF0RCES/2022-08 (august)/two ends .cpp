#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    int counter=1;
     while(1)
    {

        int n; cin >> n;
        if(n==0) return 0;
        int a[n]; ll x=0,y=0;
        deque<int>dq;
        for(int i=0 ; i<n ;i++)
        {
            int inp; cin >> inp;
            dq.pb(inp);
        }
        for(int i=0 ; i<n ; i++)
        {
            if(i%2==0)
            {
                int f= dq.front();
                dq.pop_front();
                int fs = max(dq.front(),dq.back());
                int l= dq.back();
                dq.pop_back();
                int ls = max(dq.front(),dq.back());
                if(ls>fs)
                {
                    x+=f;
                    dq.pb(l);
                }
                else
                {
                    x+=l;
                    dq.push_front(f);
                }
            }
            else
            {
                if(dq.front()>dq.back()){
                    y+=dq.front();
                    dq.pop_front();
                }else
                {
                    y+=dq.back();
                    dq.pop_back();
                }
            }
        }
        if(x>y) cout <<"In game "<<counter<<", the greedy strategy might lose by as many as "<<x-y <<" points." <<endl;
        else cout <<"In game "<<counter<<", the greedy strategy might lose by as many as "<<0 <<" points." <<endl;


        counter++;
    }

    return 0;
}
