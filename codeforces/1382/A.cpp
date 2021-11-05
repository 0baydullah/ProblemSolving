#include <bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
 
const ll mx = 1e9+7;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, a, b, n;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int x, y, fag=0;
        map<int,int>mp;
        for(int i=0; i<a; i++)
        {
            cin>>x;
            mp[x]=1;
        }
        for(int i=0; i<b; i++) {
            cin>>y;
            if(mp[y]==1 && fag==0){
                cout<<"YES"<<endl;
                cout<<1<<' '<<y<<endl;
                fag=1;
            }
        }
 
        if(fag==0) cout<<"NO"<<endl;
 
    }
 
    return 0;
}