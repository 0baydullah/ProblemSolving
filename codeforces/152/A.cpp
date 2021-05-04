#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0;cin>>n>>m;
	char c[n][m];
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>c[i][j];
	char ma[m];
	for(int i=0;i<m;i++){ma[i]='0';}
	for(int j=0;j<m;j++)
	for(int i=0;i<n;i++)if(ma[j]<c[i][j])ma[j]=c[i][j];
	int a[n+1]={0};
	for(int j=0;j<m;j++)
	for(int i=0;i<n+1;i++)if(c[i][j]==ma[j])a[i]++;
	for(int i=0;i<n+1;i++)if(a[i])count++;
	cout<<count;
}