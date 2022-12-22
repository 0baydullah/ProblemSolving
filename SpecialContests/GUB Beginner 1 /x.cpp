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
        string a,b;
        cin >> a >> b;
        ll x=a.size();
        ll y=b.size();
        int mx=-1;
        for(int i=0 ; i<x ; i++){
            for(int j=0 ; j<y ; j++){
                int pos=i;
                int cnt{0};
                for(int k=j ;k<y ; k++,pos++){
                    if(a[pos]==b[k]){
                        cnt++;
                    }
                    else break;
                }
                mx=max(mx,cnt);
            }
            
        }
        cout << x-mx*2+y << endl;

    }

    return 0;
}