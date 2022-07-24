#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define MAXN 100000

int main(){
	int N, Q, a[MAXN], s, t;
	long long c[MAXN] = {}, cc[MAXN] = {};
	cin >> N >> Q;
	for(int i=0; i<N; i++)
		cin >> a[i];
	for(int i=1; i<N; i++)
		if(a[i] < a[i-1]){
			c[i] = c[i-1] + (a[i-1] - a[i]);
			cc[i] = cc[i-1];
		} else {
			cc[i] = cc[i-1] + (a[i] - a[i-1]);
			c[i] = c[i-1];
		}
	while(Q--){
		cin >> s >> t;
		s--, t--;
		if(s < t)
			cout << c[t] - c[s] << endl;
		else
			cout << cc[s] - cc[t] << endl;
	}
}


