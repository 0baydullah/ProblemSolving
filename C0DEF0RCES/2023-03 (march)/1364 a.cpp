#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n , x; cin >> n >> x;
        int a[n]; int sum=0;
        int f[n],l[n];
        for(int i=0 ; i<n; i++){
            cin >> a[i];
            sum+=a[i];
            f[i]=sum;
        }
        int lsum=0;
        for(int i=n-1  ; i>=0 ; i--){
            lsum+=a[i];
            l[i]=lsum;
        }

        int lm=0,rm=0;
        if(sum%x){
            cout << n << endl;
            continue;
        }
        for(int i=0 ; i<n ;i++){
            if((sum-f[i])%x==0)continue;
            else{
                lm=n-i-1;
                break;
            }
        }
        for(int i=n-1 ,fuck=0; i>=0 ; i--,fuck++){
            if((sum-l[i])%x==0)continue;
            else{
                rm=n-fuck-1;
                break;
            }
        }
        int ans=max(rm,lm);
        if(ans==00) cout << -1 << endl;
        else cout << ans << endl;
        
        
        // for(int i=0 ; i<n ;i++){
        // cout << l[i] << " ";
        //}
    }

    

    return 0;
}       