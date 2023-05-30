#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()

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
        int n, m; cin >> n >> m;
        int cnt[n+1];
        for(int i=1 ; i<=n ;i++) cnt[i]=0;
        for(int i=0 ; i<m; i++){
            int u,v;
            cin >> u >> v;
            cnt[u]++;
            cnt[v]++;
        }
        map<int,int>deg;
        for(int i=1 ;i<=n ; i++)
            deg[cnt[i]]++;       
        vector<int>v;
        for(auto x:deg) v.pb(x.second);
        srt(v);
        if(v.size()==3)
            cout << v[1] << " " << v[2]/v[1] << endl;
        else cout << v[0]-1<<" "<<v[1]/(v[0]-1) <<'\n';

    }


    return 0;
} 