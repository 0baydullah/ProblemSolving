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
        set<int>s;
        map<int,int>m;
    //  cout << "Case " << t << ": ";
        int n ; cin >> n;
        int a[n],sum[n];
        
        for(int i=0 ; i<n; i++){
            cin >> a[i];
            s.insert(-a[i]);
            m[a[i]]++;
        }
        if(s.size()==1) cout << "NO\n";
        else{
            cout << "YES\n";
            for(auto u:s) 
                cout << -u << " ";
            for(auto u:m)
                for(int i=0 ; i<u.second-1 ; i++)
                    cout << u.first << " ";
            cout << endl;
        }
    }

    return 0;
}