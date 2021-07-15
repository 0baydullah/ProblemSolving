#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,m,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>x>>y;
		cout<<max( max(x,n-1-x)*m,max(y,m-1-y)*n)<<endl;
	}
}
