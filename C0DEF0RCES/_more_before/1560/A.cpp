#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

vector<int> v;


int main()
{
	for(int i=1 ; i<=10000 ; i++)
	{
		if(i%3 != 0 && i%10 !=3 )
			v.push_back(i);
	}


	int t,x ; cin >> t;
	while(t--)
	{
		cin >> x;
		cout << v[x-1] << endl;
	}

	return 0;
}