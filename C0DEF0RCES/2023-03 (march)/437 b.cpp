#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back


#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int sum,lim;
    cin >> sum >> lim;
    int tw[18]={131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

    vector<pair<int,int>>lst;
    vector<int>ans;

    for(int i=1;i<=lim ; i++){
        for(int j=0 ; j<18 ; j++){
            if(i%tw[j]==0){
                lst.pb({tw[j],i});
                break;
            }
        }
    }

    sort(lst.rbegin(),lst.rend());

    int need=sum;
    for(int i=0 ; (i<lst.size()) and (need!=0) ; i++){
        if(need>=lst[i].first){
            need-=lst[i].first;
            ans.pb(lst[i].second);
        }
    }
    
    if(need)cout << -1 << endl;
    else {
        cout << ans.size() << endl;
        for(auto x:ans) cout << x << " " ;
        cout << endl;
    }

    return 0;
}