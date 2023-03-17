#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int p,q,l,r,cnt;
bool vv[3009];
pair<int,int>a[1006];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cin >> p >> q >> l >> r;
    int aa,b;
    while (p--)
    {
        cin >> aa >> b;
        for(int i=aa; i<=b ; i++) vv[i]=1;
    }
    for(int i=1 ; i<=q ; i++){
        cin >> a[i].first >> a[i].second;
    }

    for(int i=l; i<=r ; i++){
        for(int j=1 ; j<=q ; j++){
            for(int k=i+a[j].first ; k<= i+a[j].second;k++){
                if(k>1000)break;
                if(vv[k]==1){
                    cnt++;
                    goto hell;
                }
            }
        }
        hell:

            continue;
    }
    cout << cnt << endl;
    

    return 0;
}