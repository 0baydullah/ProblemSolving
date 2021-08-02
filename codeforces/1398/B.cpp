#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define pb push_back
 
int main()
{
	
	ll t;
	cin>>t;
 
	read:
	while(t--){
		string a;
		cin>>a;
 
		ll c=0,ans=0;
		vector<ll> x;
		for(ll i=0;i<a.size();i++){
			if(a[i]=='1') c++;
			else{
				if(c){
					x.pb(c);
					c=0;
				}
			}
		}
		if(c) x.pb(c);
 
		sort(x.begin(),x.end(),greater<ll>());
		for(ll i=0;i<x.size();i+=2) ans+=x[i];
 
		cout<<ans<<endl;
	}
 
	return 0;
}