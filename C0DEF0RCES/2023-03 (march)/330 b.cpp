#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
int mp[1009];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    
    for(int i=0 ; i<m; i++){
        int a,b; cin >> a >> b;
        mp[a]++;mp[b]++;
    }
    int x;
    for(int i=1 ;i<=n ;i++){
        if(mp[i]==0){
            x=i;
            break;
        }
    }
    cout << n-1 << endl;
    for(int i=1 ;i<=n; i++){
        if(i==x)continue;
        else cout << x << " " << i << endl;
    }

    return 0;
}