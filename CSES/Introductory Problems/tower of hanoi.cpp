#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void TowerOfHanoi(vector<pair<int,int>>& p,int n, int from,int to,int aux){
    if(n==1){
        p.push_back({from,to});
        return;
    }
    TowerOfHanoi(p,n-1,from,aux,to);
    p.pb({from,to});
    TowerOfHanoi(p,n-1,aux,to,from);
}

void miryoku()
{
    int n; cin >> n;
    vector<pair<int,int>>v;
    TowerOfHanoi(v,n,1,3,2);
    cout << v.size() << endl;
    for(auto x:v)
        cout << x.first << " " << x.second << endl;
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