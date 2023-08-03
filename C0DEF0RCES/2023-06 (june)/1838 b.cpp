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

bool middle(int a, int b , int c){
    return (a<b and b<c) or (c<b and b<a);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        vector<int> in(n);
        for(int i=0 ; i<n; i++) cin >> in[i];
        int a = find(all(in),1)-in.begin();
        int b = find(all(in),2)-in.begin();
        int c = find(all(in),n)-in.begin();

        if(middle(a,c,b))
            cout << "1 1\n";
        else if(middle(c,a,b))
            cout << a+1 << " " << c+1 << endl;
        else cout << b+1 << " " << c+1 << endl;       
    }

    return 0;
}