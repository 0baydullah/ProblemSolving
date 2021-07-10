#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int n,i,r;
int arr[200001];

int main(){
	for(cin>>n;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	r+=r<arr[i];
	cout<<r;
}