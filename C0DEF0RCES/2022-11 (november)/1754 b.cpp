#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; 
    while(t--){
        int n;
    	cin>>n;
    	cout<<(n/2)+1;
    	for(int i=1;i<((n/2)+1);i++)
    	{
    		cout<<" "<<i;
    		if((i+1+(n/2))<=n)
    		cout<<" "<<i+1+(n/2);
    	} 
    	cout<<"\n"; 
    }
}