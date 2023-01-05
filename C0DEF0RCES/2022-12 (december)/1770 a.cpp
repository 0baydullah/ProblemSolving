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

    int t; cin >> t;
    while(t--)
    {
    //  cout << "Case " << t << ": ";
        int n , m; cin >> n >> m;
        int a[n];
        vector<int>b(m);
        for(int i=0 ; i<n ;i++) a[i];
        for(int i=0 ; i<m ;i++) b[i];
        sort(b.rbegin(),b.rend());
       
                for(int i=0 ; i<min(n,m) ; i++){
                    a[i]=b[i];
                }
                ll sum=0;
                for(int i=0 ; i<n ;i++){
                    sum+=a[i];
                }
                cout << sum << endl;

    }

    return 0;
}