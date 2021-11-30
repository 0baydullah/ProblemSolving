#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int n;
int mx = 0, sum = 0;

int main(){
	cin >> n;
	for(int i = 1; i <= n; ++i){
		int a;	scanf("%d", &a);
		mx = max(mx, a);
		sum += a;
	}

	sum *= 2;
	sum += n;
	sum /= n;

	printf("%d", max(sum, mx));
	return 0;
}
