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
    ll n; cin >> n;
    set<int>st;
    string s;
    cin >> s;
    ll sum{0};
    for(int i=0 ; i<n; i++){
        if(s[i]=='L') sum+=i;
        else sum+=n-i-1;
    }
    
    if(n&1){
        int m=(n/2)+1;
       for(int i=0 ;i<n; i++)
       {
            if(i<m-1 and s[i]=='L'){
                sum+=n-i-1;
                sum-=i;
            }else if (i>m-1 and s[i]=='R'){
                sum+=i;
                sum-=n-i-1;
            }
            st.insert(sum);
       } 
    }
    else{
        int m=(n/2);
        for(int i=0 ;i<n; i++)
       {
            if(i<m and s[i]=='L'){
                sum+=n-i-1;
                sum-=i;
            }else if (i>=m and s[i]=='R'){
                sum+=i;
                sum-=n-i-1;
            }
            st.insert(sum);
       }
    }int mx=-1;
    for(auto x : st){
        cout << x << " ";
        mx=x;
    }
    for(int i=st.size(); i<n; i++)
        cout << mx << " ";
    cout << endl;
        
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}