#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define srt(s)  sort(s.begin(),s.end())
#define rsrt(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())
#define all(x)   x.begin(),x.end()
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define setbit0(n, i) ((n) & (~(1LL << (i))))
#define setbit1(n, i) ((n) | (1LL << (i)))
#define togglebit(n, i) ((n) ^ (1LL << (i)))
#define lastone(n) ((n) & (-(n)))
#define ff first
#define ss second

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,x;
    cin >> n >> x;
    pair<int,int>p[n];
    for(int i=1 ; i<=n; i++){
        int sss; cin >> sss;
        p[i-1]={sss,i};
    }
    sort(p,p+n);
    int i=0, j=n-1;
    int flag=1;
    while(i<j){
        if(p[i].ff+p[j].ff==x){
            cout << p[i].ss << " " << p[j].ss<< endl;
            flag=0;
            break;
        }else if(p[i].ff+p[j].ff>x){
            j--;
        }else if(p[i].ff+p[j].ff<x){
            i++;
        }
    }
    if(flag) cout << "IMPOSSIBLE" << endl;

    return 0;
}