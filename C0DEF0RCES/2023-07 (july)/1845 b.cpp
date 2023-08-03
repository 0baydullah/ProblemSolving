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
#define pii pair<int,int>

#define ll long long
#define ull unsigned long long

using namespace std;
pii a,b,c;
int dist(pii a,pii b){
    return(abs(a.ff-b.ff)+abs(a.ss-b.ss));
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        
        cin >> a.ff >>a.ss >> b.ff>>b.ss>>c.ff>>c.ss;
        cout << (dist(a,b)+dist(a,c)-dist(b,c))/2+1 << endl;
    }

    return 0;
}