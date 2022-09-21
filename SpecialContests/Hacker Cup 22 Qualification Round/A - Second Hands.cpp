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
    int n, k,x; cin >> n >> k;
    map<int,int>m;
    for(int i=0 ; i<n ;i++){
        cin >>x;
        m[x]++;
    } 
    if(k*2<n)
    {
        cout << "NO" << endl;
        return;
    }
    for (auto u : m)
    {
        if(u.second>2)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case #" << t << ": ";
        miryoku();
    }

    return 0;
}