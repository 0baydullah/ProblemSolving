#include <iostream>
using namespace std;
int n,m;
char x;
main() {
	cin>>n>>m;
	while(cin>>x) if(x!='B' && x!='W' && x!='G') { cout<<"#Color"; return 0; }
	cout<<"#Black&White";
}