#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    int n; cin >> n;
    int a[n][6];
    memset(a,0,sizeof(a));
    int k;
    for(int i=0 ; i<n ;i++){
        cin >> k ;int x;
        for(int j=0; j<k ; j++)
        {
            cin >> x ;
            a[i][x]=1;
        }
    }
    for(int i=0 ; i<n-1; i++){
        for(int j=i+1 ; j<n ;j++){
            if((a[i][1] or a[j][1] ) and (a[i][2] or a[j][2] ) and (a[i][3] or a[j][3] ) and (a[i][4] or a[j][4] ) and (a[i][5] or a[j][5] ) ){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}