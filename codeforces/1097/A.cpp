#include <iostream>
using namespace std;

int main()
{
	string s,t;
	cin>>s;
	while(cin>>t)
	{
		if (s[0]==t[0]||s[1]==t[1])return cout<<"YES",0;
	}
	cout<<"NO";
}