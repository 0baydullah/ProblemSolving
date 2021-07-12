/// 1092 a
#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);


    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        ll a=n/k,b=n%k,i,p,j;
        char x='a';
        for(i=0;i<k;i++){
            p=a+(b>0);b--;
            for(j=0;j<p;j++){
                cout<<x;
            }
            x++;
        }
        cout<<endl;
    }



    return 0;
}
