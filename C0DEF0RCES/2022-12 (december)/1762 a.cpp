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
        int n; cin >> n;
        int a[n];ll sum{0};
        int evcnt{0};
        for(int i=0 ;i <n ;i++){
            cin >> a[i];
            sum+=a[i];
            if(a[i]%2==0 and a[i]%4==0)evcnt++;
        }
        int mn=9999999;
        int cnt{0};
        if(sum%2==0){
            cout << 0 <<endl;
            
        }else{
            for(int i=0 ; i<n ;i++)
            {
                cnt =0;
                if(a[i]&1){
                    while(a[i]%2){
                        cnt++;
                        a[i]/=2;
                    }
                    mn=min(mn,cnt);
                }else{
                    while(a[i]%2==0){
                        cnt++;
                        a[i]/=2;
                    }
                    mn=min(mn,cnt);
                }
            }
            cout << mn << endl;
            
        }
            }

    return 0;
}