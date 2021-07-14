#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,o=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			if(k%2!=0)
			o++;
		}
		if((o==n && n%2==0)||o==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}