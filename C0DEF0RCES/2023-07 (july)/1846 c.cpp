#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define m_p make_pair
#define pb push_back
#define fi first
#define sc second
#define PI acos(-1.0)
#define MOD 1000000007
#define endl '\n'
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define set(n, k) (n |= (1LL << k))
#define unset(n, k) (n &= ~(1LL << k))
#define check(n , k) (n & (1LL << k))
#define toggle(n, k) (n ^ (1LL << k))
#define fastio std::ios_base::sync_with_stdio (false); cin.tie(0); cout.tie(0);
#define Check(n,pos) (n & (1<<pos))
#define Set(n,pos) (n  (1<<pos))
ll PERFECT_NUM[]={6,28,496,8128,33550336,8589869056,137438691328,2305843008139952128};
//-----------------------------------------------------------------------------------
int popcount(ll n) {return __builtin_popcountll(n);}
int poplow(ll n) {return __builtin_ctzll(n);}
int pophigh(ll n) {return 63 - __builtin_ctzll(n);}
const int SZ=1000005;
int MARK[SZ+1];
vector<int>PRIME;

void sieve(){
    MARK[1]=1;
    int root=sqrt(SZ);
    MARK[0]=MARK[1]=1;
    for(int i=4; i<SZ; i+=2) MARK[i]=1;
    
    for(int i=3; i<=root; i+=2){
        if(!MARK[i]){
            for(int j=i*i; j<=SZ; j+=(i*2)){
                MARK[j]=1;
            }
        }
    }
    PRIME.push_back(2);
    for(int i=3; i<=SZ; i+=2){
        if(!MARK[i]) PRIME.push_back(i);
    }
    return;
}

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return ((a/gcd(a,b))*b);
}

ll BigMod(ll a, ll p, ll m){
    ll ret=1;
    while(p){
        if(p&1) ret=((ret%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        p/=2;
    }
    return ret;
}
ll AddMul(ll a, ll p, ll m){
    ll ret=0;
    while(p){
        if(p&1) ret=((ret%m)+(a%m))%m;
        a=((a%m)+(a%m))%m;
    }
    return ret;
}
void iofile(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
//-------------------------------------------------------------------------
/***TO GET SOMETHING YOU NEVER HAD YOU HAVE TO DO SOMETHING YOU NEVER DID***/
//-------------------------------------------------------------------------

void solve(){
    ll n, p, t; cin>>n>>p>>t;
    vector<ll>v;


    ll cpoint, cpenl, res=1;
    for(int i=0; i<n; i++){
        v.clear();
        for(int j=0; j<p; j++){
            int xx; cin>>xx;
            v.push_back(xx);
        }

        sort(v.begin(), v.end());
        ll point=0, penl=0, x=0;
        for(auto j:v){
            x+=j;
            if(x>t) break;

            point++;
            penl+=x;
        }
        //cout<<point<<" "<<penl<<" "<<i<<endl;

        if(i==0){
            cpoint=point; cpenl=penl;
        }
        else{
            if(cpoint!=point){
                if(point>cpoint) res++;
            }
            else{
                if(penl<cpenl) res++;
            }
        }
    }
    cout<<res<<endl;
    
}


int main(){
    //sieve();
    fastio;
    iofile();
    ll t=1, tc=1;
    cin>>t;
    //cin.ignore();
    while(t--){
        //cout<<"Case "<<tc++<<": ";
        solve();
    }

    return 0;
}