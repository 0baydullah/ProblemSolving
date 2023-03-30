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



int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";

    int n,k; cin>>n>>k;
    int x=0;
    vector<int>v;
    int temp=(n*(n+1))/2 - k, neg=0, pos=n;
    while(x<temp){
        neg++;
        v.push_back(-31);
        x+=pos; pos--;
    }
    while(v.size()<n) v.push_back(1);
    reverse(v.begin(), v.end());
    int need=x-temp;
    int in=0;
    while(need){
        int tmp=min(need,neg);
        v[in]+=(tmp*31);
        v[in]-=(n-neg-(in+1));
        need-=tmp;
        in++;
    }
    for(auto i:v) cout<<i<<" ";
    cout<<endl;

    }

    return 0;
}