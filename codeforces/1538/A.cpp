#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
 int small= 100 , big=0, x,y;
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, a, k1=0, k2=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		if(a==1) k1=i+1;
		if(a==n) k2=i+1;
	}
	cout<<min(min(n-k1+1+k2,n-k2+1+k1),min(max(k1,k2),n-min(k1,k2)+1))<<endl;
    }

    return 0;
}
