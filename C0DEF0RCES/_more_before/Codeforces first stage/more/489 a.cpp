#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n,k;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<n<<endl;
	for(int i=0; i<n; i++)
	{
		k=i;
		for(int j=i; j<n; j++)
		{
			if(a[j]< a[k])
			  k=j;
		}
		cout<<i<<" "<<k<<endl;
		swap(a[i], a[k]);
	}

    return 0;
}
