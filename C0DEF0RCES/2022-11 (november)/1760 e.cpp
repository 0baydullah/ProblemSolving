#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

ll cntInvertion(int a[],int n){
    ll _1=0,sum=0;
    for(int i=0 ; i<n; i++){
        if(a[i]==1)_1++;
        else sum+=_1;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        int a[n];
        for(int i=0 ; i<n; i++) cin >> a[i];
        ll ans=0;
        ans = max(ans, cntInvertion(a,n));
        int I,key=0;
        for(int i=0 ; i<n; i++)
            if(a[i]==0){
                a[i]=1;
                I=i;
                key=1;
                break;
            }
        ans = max(ans, cntInvertion(a,n));
        if(key)a[I]=0;
        for(int i=n-1 ; i>=0; i--)
            if(a[i]==1){
                a[i]=0;
                break;
            }
        ans = max(ans, cntInvertion(a,n));

        cout << ans << endl;
    }

    return 0;
}