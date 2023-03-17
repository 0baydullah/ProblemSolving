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

    int n,mm;
    cin >> n >> mm;

    vector<int>a,b;
    for(int i=0 ; i<n ; i++){
        int x; cin >> x; a.pb(x);
    }
    for(int i=0 ; i<mm ; i++){
        int x; cin >> x; b.pb(x);
    }
    int cnt{n};
    for(int i=0 ; i<n; i++){
        for(int j=0 ;j<mm ; j++){
            if(a[i]<=b[j]){
                cnt--;
                b[j]=-69;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}