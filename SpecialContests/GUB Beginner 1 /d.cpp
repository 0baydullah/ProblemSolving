#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

ll digit_sum(ll n){
    ll sum =0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        ll n ;cin >> n;

        while(1){
            ll sum = digit_sum(n);
            if(gcd(n,sum)>1){
                cout << n << endl;
                break;
            }else{
                n++;
            }
        }
    }

    return 0;
}