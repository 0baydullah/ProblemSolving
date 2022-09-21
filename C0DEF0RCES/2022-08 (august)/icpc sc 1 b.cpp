#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

   // ll t; cin >> t; while(t--)
    {
        bool key=1;
        int n,k; cin >> n >> k;
        int a[n],b[n],sum{0};
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            sum+=a[i];
            b[i]=sum;
        }
        int mn,mx;
        int cnt =0 ;
        int l=-1 , r=-1;
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++ )
            {
                if(abs(a[i]-a[j])==k)
                {
                    mx= max(a[i],a[j]);
                    mn= min(a[i],a[j]);
                    for(int k=mn+1 ; k<mx ; k++)
                    {
                        if(a[k]>mx or a[k]<mn)
                        {
                            key=0;
                            break;
                        }
                    }
                    if(key)
                    {
                        for(int x=mn-1 ; x>=0 ; x--)
                        {
                            if(a[x]<mx and a[x]>mn)
                                cnt++;
                                else break;
                        }
                        for(int x=mx+1 ; x<n ; x++)
                        {
                            if(a[x]<mx and a[x]>mn)
                                cnt++;
                            else break;
                        }
                        key=1;
                    }
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
