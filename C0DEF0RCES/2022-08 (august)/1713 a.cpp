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
        int n; cin >> n ;
        int step{0};
                    int u=0,d=0,l=0,r=0;
        for(int i=0 ; i<n ; i++)
        {
            int a,b; cin >> a >> b;

            if(a<0)
            {
                if(l<abs(a))
                l=-a;
            }
            if(a>0)
            {
                if(r<abs(a))
                r=a;
            }
            if(b<0)
            {
                if(d<abs(b))
                d=-b;
            }
            if(b>0)
            {
                if(u<abs(b))
                u=b;
            }
        }
        step = (l+r+d+u)*2;
        cout << step << endl;
    }

    return 0;
}
