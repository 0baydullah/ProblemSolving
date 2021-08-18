#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else {
            if(a<b && (b-a)%2==1) cout<<1<<endl;
            else if(a>b && (a-b)%2==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

    return 0;
}