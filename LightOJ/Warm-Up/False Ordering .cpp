#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;
#define mx 1000
int divCnt[1000];
pair<int,int> d[mx];


bool comp(pair<int,int> x, pair<int,int>y){
    if(x.second != y.second)
        return x.second<y.second;
    else return x.first>y.first;
}

void compute(){
    for(int i= 1; i<=mx ; i++){
        d[i-1].first =i;
        for(int j=i ; j<=mx ; j+=i)
            d[j-1].second++;
    }
    sort(d,d+mx,comp);

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    compute();int T=1;
    cin >> T;
    
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int n; cin >> n;
        cout << d[n-1].first << endl;
    }

    return 0;
}