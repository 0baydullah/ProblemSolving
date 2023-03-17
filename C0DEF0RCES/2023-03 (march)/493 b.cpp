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

    int n; cin >> n;
    int a[n];
    ll pos=0,neg=0;
    vector<int>aa,bb;
    for(int i=0 ; i<n ; i++){
        cin  >> a[i];
        if(a[i]>0){pos+=a[i];aa.pb(a[i]);}
        else {neg+=-a[i];bb.pb(abs(a[i]));}
    }

    if(pos>neg) cout << "first" << endl;
        else if (neg>pos) cout << "second" << endl;
        else{
            
            if(aa>bb)cout << "first" << endl;
            else if (aa<bb) cout << "second" << endl;
            else{
                if(a[n-1]>0)cout << "first" << endl;
                else cout << "second" << endl;
            }
        }

    return 0;
}