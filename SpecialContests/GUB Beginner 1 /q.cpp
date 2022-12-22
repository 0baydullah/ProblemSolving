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
        for(int i=0 ; i<n; i++){
            cin >> a[i];
        }
        int v[n+1][n];
        for(int i=0 ; i<n;i++){
            v[0][i]=a[i];
        }
        for(int i=1 ;i<=n; i++){
            map<int,int>m;
            for(int i=0 ; i<n; i++) m[a[i]]++;
            for(int j= 0 ; j<n ; j++){
                a[j]=m[a[j]];
                v[i][j]=a[j];
            }
        }

        int q; cin >> q;
        while(q--){
            int x,k; cin >> x >> k;
            x--;
            if(k<=n) cout << v[k][x] << endl;
            else cout << v[n][x] << endl;
        }
    }

    return 0;
}