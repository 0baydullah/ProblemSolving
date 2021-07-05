#include <bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
 
const ll mx = 1e9+7;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int od=0,ev=0;
        for(int i=0; i<2*n;i++){
            int x;cin>>x;
            if(x%2==0)ev++;
            else od++;
        }
        if(ev==n && od==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
 