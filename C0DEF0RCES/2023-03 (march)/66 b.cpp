#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
int a[1009];int n;
int check(int x){
    int cnt=1;
    for(int i=x+1 ; i<n ; i++){
        if(a[i-1]>=a[i])cnt++;
        else break;
    }
    for(int i=x-1 ; i>=0 ; i--){
        if(a[i+1]>=a[i])cnt++;
        else break;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

     cin >> n;
    for(int i=0 ; i<n ; i++) cin >> a[i];
    int mx=-1;
    for(int i=0 ; i<n; i++){
        mx=max(mx,check(i));
    }
    cout << mx << endl;

    return 0;
}