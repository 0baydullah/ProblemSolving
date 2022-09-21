#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int N=n,a[n];
		int l=0,r=0;
		for(int i=0 ; i<n ; i++)
		{
			cin >> a[i];
		}
		for(int i=0 ; i<n ; i++)
		{
			if(a[i]==0)
			{
				l=i-1;
				break;
			}
		}
		for(int i=n-1 ; i>=0 ; i--)
		{
			if(a[i]==0)
			{
				r=i+1;
				break;
			}
		}
		cout << r-l << endl;
	}
}
