#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n , m;

		cin >> n >> m;

		int a,b,c,d,f=0;

		for(int i=0 ; i< n ; i++){
			cin>> a>> b >> c >> d;
			if(b==c) f=1;
		}
		if((m*m)%4 == 0 && f==1) cout << "YES" << endl;
		else cout << "NO" << endl;
		

	}

	return 0;
}