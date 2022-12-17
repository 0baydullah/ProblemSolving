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
        int n, l;
        cin >> n >> l; 
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        map<int,int>one,zero;
        for(int i=0 ; i<n ; i++){
            int x=a[i];
            for(int j=0 ; j<l ; j++){
                if(x&1) one[j]++;
                else zero[j]++;

                x=x>>1;
            }
        }
        ll ans=0;
        for(int i=0 ; i<l ; i++){
            if(one[i]>zero[i])ans+=pow(2,i);
        }
        cout << ans <<endl;
    }

    return 0;
}