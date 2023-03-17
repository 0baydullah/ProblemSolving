#include <bits/stdc++.h>

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fRead freopen("in.txt","r",stdin);
#define fWrite freopen ("out.txt","w",stdout);

#define MOD 1000000007
#define INF 1e18
#define PI acos(-1)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define MEM(a,x) memset(a,x,sizeof(a))
#define endl '\n'
#define ll long long
#define llu unsigned long long
#define mod 998244353

using namespace std;

const int N = 200010;
int dx[]={0,0,1,1,-1,-1,1,-1};
int dy[]={1,-1,1,-1,1,-1,0,0};

//ll gcd(ll a, ll b){if(b == 0) return a; a %= b; return gcd(b, a);}
//ll lcm(ll a, ll b){return (a / gcd(a, b) * b);}
 
void wiz()
{
    #ifndef ONLINE_JUDGE
        fRead;
        fWrite;
    #endif
}

int n, m;
vector <vector <int>> e;
vector <int> gen;
bool flag;

void dfs(int u, int c)
{
    if(flag) return;
    gen[u] = c;
    for(auto x: e[u]){
        if(gen[x] == -1){
            dfs(x, 1 - c);
        }
        else if(gen[u] == gen[x]){
            flag = true; return;
        }
    }
}


void solve()
{
    cin >> n >> m;
    e.clear();
    e.resize(n + 1);
    gen.assign(n + 1, -1);
    flag = false;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        e[x].pb(y);
        e[y].pb(x);
    }

    for(int i = 1; i <= n; i++){
        if(gen[i] == -1) dfs(i, 0);
    }
    if(flag) cout << "Suspicious bugs found!\n";
    else cout << "No suspicious bugs found!\n";
    
    
}
int main()
{
    //fastio();
    //wiz();

    

    int T = 1;
    cin >> T;
    for(int t = 1; t <= T; t++){
        //cout << "Case " << t << ": ";
        cout << "Scenario #" << t << ": " << endl; 
        solve();
    }

    return 0;
}