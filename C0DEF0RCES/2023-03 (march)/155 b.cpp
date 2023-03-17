#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second>b.second)return 1;
    if(a.second==b.second){
        if(a.first>b.first) return 1;
        else return 0;
    }
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n; cin >> n;
    vector<pair<int,int>>v;
    for(int i=0 ; i<n ;i++){
        int a,b; cin >> a >> b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    int point=0,turn=1;
    int N=n;
    
    for(int i=0 ; i<N ; i++){
        point+=v[i].first;
        turn+=v[i].second;
        n--;
        turn--;
        if(turn==0 or n==0) break;
    }
    cout << point << endl;

    return 0;
}