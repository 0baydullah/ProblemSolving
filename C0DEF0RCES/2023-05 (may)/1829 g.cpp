#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;


ll sum[2000009];
ll a[1500][1500], x=1;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
        for(int i=1 ; i<1500 ;i++){
            for(int j=i-1; j>=1 ; j--){
                a[j][i-j]=a[j-1][i-j]+a[j][i-j-1] -a[j-1][i-j-1]+x*x;
                sum[x]=a[j][i-j];
                x++;
            }    
        }
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        
        ll s; cin >> s;
                cout << sum[s] << endl;
    }

    return 0;
}