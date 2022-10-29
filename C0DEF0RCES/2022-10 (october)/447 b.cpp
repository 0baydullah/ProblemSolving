#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    string s; cin>> s; 
    int k ; cin >> k;
    int a[26];
    int mx=0;
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
        mx=max(mx,a[i]);
    }
    int ans=0;
    for(int i=0 ; i<s.size();i++){
        ans+=(i+1)*a[s[i]-'a'];
    }
    int val=s.size()+1;
    while(k--){
        ans+=val*mx;
        val++;
    }
    cout << ans << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
  //  cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}