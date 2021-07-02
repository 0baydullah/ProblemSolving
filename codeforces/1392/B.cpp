
#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    long long t;
	cin>>t;


	while(t--){
		long long n,k;
		cin>>n>>k;

		long long a[n],m=-INT_MAX,x=0;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			m=max(a[i],m);
		}
		for(long long i=0;i<n;i++){
			a[i]=m-a[i];
			x=max(x,a[i]);
		}k--;

		k%=2;
		for(long long i=0;i<n && k;i++){
			a[i]=x-a[i];
		}

		for(long long i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
	}

    return 0;
}
