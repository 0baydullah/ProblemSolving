#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define setbit0(n, i) ((n) & (~(1LL << (i))))
#define setbit1(n, i) ((n) | (1LL << (i)))
#define togglebit(n, i) ((n) ^ (1LL << (i)))
#define lastone(n) ((n) & (-(n)))
#define ff first
#define ss second

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
        int n, k , x; cin >> n >> k >> x;
        if(x!=1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i=0 ; i<n; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }else{
            if(n==1)cout << "NO" << endl;
            else if(k==2 and n<k) cout << "NO" << endl;
            else if(k==1) cout << "NO" << endl;
            else if(k==2 and n&1) cout << "NO" << endl;
            else if(k==2 and ~n&1){
                cout << "YES" << endl;
                cout << n/2 << endl;
                    for(int i=0 ; i<n/2 ; i++){
                        cout << 2 << " ";
                    }cout << endl;
            }
            else if(k>=3){
                cout << "YES" << endl;
                if(n&1){
                    int ans=1+(n-3)/2;
                    cout << ans << endl;
                    cout << 3 << " ";
                    for(int i=0 ; i<ans-1 ; i++){
                        cout << 2 << " ";
                    }cout << endl;
                }
                else{
                    cout << n/2 << endl;
                    for(int i=0 ; i<n/2 ; i++){
                        cout << 2 << " ";
                    }cout << endl;
                }
            }
        }
    }

    return 0;
}   