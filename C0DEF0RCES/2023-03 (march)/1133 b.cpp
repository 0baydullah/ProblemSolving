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
int frac[100];
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n, k; cin >> n >> k;
    
    for(int i=0 ; i<n ; i++){
        int x ; cin >> x;
        frac[x%k]++;
    }

    int ans{frac[0]/2};

    for(int i=1 ; i<(k+1)/2 ;i++){
        ans+=min(frac[i],frac[k-i]);
    }

    if(k%2==0) ans+=frac[k/2]/2;

    cout << ans*2 << endl;

    return 0;
}