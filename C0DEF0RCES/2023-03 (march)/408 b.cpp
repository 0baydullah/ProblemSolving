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

    int cnt=0;
    string a,b; cin >> a >> b;
    map<char,int>aa,bb;
    for(int i=0 ; i<a.size() ;i++)aa[a[i]]++;
    for(int i=0 ; i<b.size() ;i++)bb[b[i]]++;

    for(auto x : bb){
        if(x.second and aa[x.first]){
            cnt+=min(x.second,aa[x.first]);
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << cnt << endl;

    return 0;
}