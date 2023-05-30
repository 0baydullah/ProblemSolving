#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    int a[n];
    long long sum{0};
    for(int i=0 ; i<n; i++){
        cin>> a[i] ;
    }
    long long ans{0},ans2{0};
    sort(a,a+n);
    int mid=(n+1)/2-1;
    for(int i=0 ; i<n ; i++){
        ans+=abs(a[i]-a[mid]);
    }
    cout <<ans << endl;
}
