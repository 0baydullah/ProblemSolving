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

    int T=1;
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n , ti; cin >> n >> ti;
        queue <int> a;
         int sum=0,mx=-1,cnt=0;
        for(int i=0 ; i<n; i++){
            int x ; cin >> x;
            a.push(x);
            sum+=x;
            cnt++;
            if(sum>ti){
                sum-=a.front();
                a.pop();
                cnt--;
            }
            mx=max(cnt,mx);
        }
        cout << mx << endl;
    }

    return 0;
}