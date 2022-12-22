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
        int a[n];
        for(int i=0; i<n ;i++){
            cin >> a[i];
        }
        map<int,int>m;
        for(int i=0 ; i<n ;i++){
            int x=a[i];
            while(x>n)x/=2;
            while(m[x]==1)x/=2;
            if(x>0)m[x]=1;
        }
        int flag=1;
        for(int i=1 ;i<=n ; i++){
            if(m[i]==0){
                flag=0;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}