#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	while(n--){
		int a,b,res=0;
		cin>>a>>b;
		if (b==1){
			res++;
			b++;
		}
		while (log(a)/log(b) - log(a)/log(b+1)>1){
			b++;
			res++;
		}
		while(a){
			a/=b;
			res++;
		}
		cout<<res<<endl;
	}
}