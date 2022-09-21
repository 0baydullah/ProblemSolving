#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={0},n,f;
	cin>>n;
	while(n--)
	{
		cin>>f;
		a[f]++;
	}
	cout<<a[4]+a[3]+(a[2]*2+max(a[1]-a[3],0)+3)/4;
} 
