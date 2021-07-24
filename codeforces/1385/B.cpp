#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
     int n,x,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mp;
        vector<int>v;
        for(int i=0; i<n*2;i++)
        {
            cin>>x;
            mp[x]++;
            if(mp[x]==1) v.push_back(x);
        }
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
    }
}