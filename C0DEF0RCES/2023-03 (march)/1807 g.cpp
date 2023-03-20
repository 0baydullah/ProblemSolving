#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)//sdfsdf
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void solve(){
    int n; cin>>n;
    map<int,int>mp;
    mp[1]++;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    map<int,int>::reverse_iterator it;
    for(int i=0; i<n; i++){
        int x=a[i];
        for(it=mp.rbegin(); it!=mp.rend(); it++){
            int xx=it->first;
            int val=it->second;
            int mx=val;
            //cout<<x<<" "<<xx<<" "<<val<<endl;
            int mn=min(x/xx,mx);
            x-=(mn*xx);
        }
        if(x){
            cout<<"NO"<<endl;
            return;
        }
        if(i) mp[a[i]]++;
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