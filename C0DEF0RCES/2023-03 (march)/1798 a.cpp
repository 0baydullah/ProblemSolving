#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void code()
{
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    int ma = 0, mb = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i]; ma = max(ma, a[i]);
    }
    for(int i = 0; i < n; i++){
        cin >> b[i]; mb = max(mb, b[i]);
    }

    bool f = 1, f2  = 1;
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) swap(a[i], b[i]);
    }

    ma = a[n-1];
    mb = b[n-1];

    for(int i = 0; i < n - 1; i++){
        if(a[i] > ma){
            cout << "NO\n"; return;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(b[i] > mb){
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";


}


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        code();

    }

    return 0;
}