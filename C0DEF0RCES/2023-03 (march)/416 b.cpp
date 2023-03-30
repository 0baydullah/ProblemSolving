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

    int m,n; cin >> m >> n;
    int a[m][n];
    for(int i=0 ; i<m ;i++){
        for(int j=0 ; j<n; j++){
            cin >> a[i][j];
        }
    }
    vector<int>finishTime(m);
    for(int i=0 ; i<n ;i++){
        int freeAt =0;
        for(int j=0 ; j<m ;j++){
            int start = max(freeAt,finishTime[j]);
            finishTime[j] = start+a[j][i];
            freeAt=finishTime[j];
        }
    }

    for(auto x:finishTime) cout << x << " ";

    return 0;
}