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
        int n;cin >> n;
        int aa[n+3];
        int pc[n+3]={0};
        for(int i=1 ; i<=n ;i++){ cin >> aa[i];pc[i]++;}
        int q; cin >> q;
        while(q--){
            int x; cin >> x;
            if(x==1){
                int a, b; cin >> a >> b;
                if(a==0 or b==0 or a==b) continue;
                else {
                    if(a<b) {
                        aa[b]+=aa[a];
                        aa[a]=0;
                        pc[b]++;
                        pc[a]--;
                   }else {
                    aa[a]+=aa[b];
                        aa[b]=0;
                        pc[a]++;
                        pc[b]--;
                   }
                }
            }
            if(x==2){
                int a; cin >> a;
                cout << pc[a] << endl;
            }
            if(x==3){
                int a; cin >> a;
                cout << a << endl;
            }
        }
    }

    return 0;
}