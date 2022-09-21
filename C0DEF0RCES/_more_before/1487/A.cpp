#include<bits/stdc++.h>
using namespace std;
int tab[104], res;
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m=100;
		scanf("%d", &n);	
		for(int i=1; i<=n; i++)
		{
		int a;
		scanf("%d", &a);
		 m=min(m, a);
		tab[a]++;
		}
		printf("%d\n", n-tab[m]);
		res=0;
		for(int i=1;i<=101;i++)
		tab[i]=0;
	}
	return 0;
}