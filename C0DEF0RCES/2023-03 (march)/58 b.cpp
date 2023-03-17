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

    cout << n << " ";
    int sqn=sqrt(n);

    for(int i=2 ; i!=1 and i<=sqn ; i++){
        while(n%i==0){
            n/=i;
            cout << n << " ";
        }
    }
    if(n!=1) cout << 1 << endl;
 

    return 0;
}