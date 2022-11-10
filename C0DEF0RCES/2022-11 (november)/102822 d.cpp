#include "bits/stdc++.h"
#define ll long long

using namespace std;

int T,n;
int a[100005];

bool ok(ll x){
    ll flag = x;
    for(int i=0 ; i<n;i++){
        flag-=max((ll)0,x-a[i]-1);
        if(flag<=0)break;
    }
    return flag>0;
}

int main()
{
   // ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    
    cin >> T;
    for(int t=1 ; t <= T ; t++){
        cin >> n; //cout << T << " " << n;
        for(int i=0 ; i<n; i++) cin >> a[i];
      cout << "Case #" << t << ": ";
        ll lo=0, hi=(ll)1e14;
        while(hi-lo>1){
            ll mid = (lo+hi)/2;
            if(ok(mid)) lo=mid;
            else hi=mid;
        }
        cout << lo << endl;
    }

    return 0;
}