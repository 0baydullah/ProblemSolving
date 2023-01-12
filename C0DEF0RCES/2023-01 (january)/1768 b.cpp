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
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n, k; cin >> n >> k;
        int cnt{0};
        vector<int>v(n);
        for(int i=0 ;i <n; i++){
             cin >> v[i];}
        if(is_sorted(v.begin(),v.end())){
            cout << 0 << endl;
        }else if(n==k){
            cout <<1 << endl;
        }else{
            for(int i=0 ; i<n; i++){
                if(v[i]==cnt+1)cnt++;
            }
            int x=n-cnt;
            cout << ceil((double)(x)/k)<< endl;
        }
    }

    return 0;
}