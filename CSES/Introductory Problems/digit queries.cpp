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
    ll n;
    vector<ll>powers(19,1);
    for(int i=1 ; i<19 ; i++){
        powers[i]=powers[i-1]*10;
    }
    while(t--){
        cin >> n;
        ll numDig=0;
        ll digitLen =0 ;
        ll prevDig = 0;

        for(int i=1 ; i<19 ; i++){
            digitLen += (powers[i]-powers[i-1])*i;
            if(digitLen >=n){
                numDig=i;
                break;
            }
            prevDig = digitLen;
        }

        ll low = powers[numDig-1];
        ll high = powers[numDig]-1;
        ll ans =0 ; 
        ll strtPosAns =0;

        while(low <=high){
            ll mid = (high+low)/2;
            ll strtPos =(mid-powers[numDig-1])*numDig + prevDig +1;
            if(strtPos <= n){
                if(mid>ans){
                    ans = mid;
                    strtPosAns = strtPos;
                }
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        string number = to_string(ans);
        cout << number[n-strtPosAns] << endl;
    }

    return 0;
}