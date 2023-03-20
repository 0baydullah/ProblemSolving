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

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int a[n], mrk[n]={0},prv=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(s[i]==s[j] && mrk[j]==0){
                a[j]=prv^1;
                mrk[j]=1;
            }
        }
        prv^=1;
    }
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        solve();
    }

    return 0;
}