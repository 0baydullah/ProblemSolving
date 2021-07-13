#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int c=0;
	for(int i=0; i<n; ++i)
	{
		if(s[i]%2==0)
			c += i+1;
	}
	cout<<c;
}