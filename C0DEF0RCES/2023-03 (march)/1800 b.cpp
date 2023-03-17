#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int burlcnt(string s,int n){
    map<char,int>m;
    int cnt=0;
    for(int i =0 ; i<n ; i++){
        m[s[i]]++;
    }
    for(auto u:m){
        cnt+=u.second/2;
    }
    return cnt;
}



int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n,k; cin >> n >> k;int a[200]={0};
        string s; cin >> s;
        string s2=s;
        transform(s2.begin(),s2.end(),s2.begin(),::tolower);
        int mx= burlcnt(s2,n);
        for(int i=0 ; i<n ; i++){
            a[s[i]-'A']++;
        }
        int mn=0;
        for(int i=0 ; i<26 ; i++){
            mn+=min(a[i],a[i+32]);
        }
       // for(int i=0 ; i<80 ; i++)
      //  cout << i << " " << a[i] << endl;
        cout <<  min(mn+k,mx) << endl;
    }

    return 0;
}