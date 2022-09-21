#include <bits/stdc++.h>
using namespace std;
int const MN = 111;
int n , ans , mx = -1 , mn = MN , posmx , posmn;
int main(){
	cin >> n;
	for(int i = 0,a ; i < n ; i++){
		cin >> a;
		if(mx < a)
			mx = a , posmx = i;
		if(mn >= a)
			mn = a , posmn = i;
	}
	int ans = n-1-posmn + posmx;
	if(posmx > posmn) ans --;
	cout << ans;
}