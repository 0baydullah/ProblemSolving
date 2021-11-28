#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

bool cmp(const pair <int,int> &p1 , const pair <int,int> &p2)
{
    if (p1.first > p2.first ) return 1;
    else if(p1.first == p2.first && p1.second < p2.second) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n , k;
    cin >> n >> k;
    vector <pair<int,int>> v(n);
    for(int i=0 ; i<n ; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(),v.end(),cmp);
 //   cout << endl;
 //   for(auto u : v) cout << u.first << " " <<  u.second << fuckl;
    int cnt{0};

    for(auto u : v) if(v[k-1] == u) cnt++;

    cout << cnt;

    return 0;
}
