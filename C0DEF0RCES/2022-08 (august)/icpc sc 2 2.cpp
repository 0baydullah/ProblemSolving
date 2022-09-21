#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

 //   ll t; cin >> t; while(t--)
    {
        priority_queue<ll>pq;
        ll n, m , k; cin >> n >> m >> k;
        ll a[n];
        for(int i=0 ;i <n ;i++){
                int x; cin >>  x;
                pq.push(x);
        }
        while(k--)
        {
            ll sum=0;
            for(int i=0 ; i<m ; i++)
            {
                sum+= pq.top();
                pq.pop();
            }
            pq.push(sum);
        }
        cout << pq.top() << endl;

    }

    return 0;
}
