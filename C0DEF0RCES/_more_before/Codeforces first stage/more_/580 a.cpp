#include <iostream>
using namespace std;
int n,x,y,s,ans;
int main()
{
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>x;

		if(y>x) s=0;
		s++;

		if(ans<s) ans=s;
		y=x;
	}

	cout<<ans;
}
