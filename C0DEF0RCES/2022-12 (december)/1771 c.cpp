#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;


#define SZ 1000007
int MARK[SZ+1];
vector<int>PRIME;

void sieve(){
    MARK[0]=MARK[1]=1;
    int root = sqrt(SZ);

    for(int i=4 ; i<SZ ; i+=2) MARK[i]=1;
    for(int i=3 ; i<=root ; i+=2){
        if(!MARK[i]){
            for(int j=i*i ; j<=SZ ; j+=i*2){
                MARK[j]=1;
            }
        }
    }
    
    PRIME.push_back(2);
    for(int i=3 ; i<=SZ ; i+=2)
        if(!MARK[i])
            PRIME.push_back(i);

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    sieve();
    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n; cin >> n;
        ll a[n];
        bool flag=0;
        map<int,int>m;
        for(int i=0 ; i<n ;i++)
            cin >> a[i];
        for(int i=0 ; i<n ;i++){
            for(int j=0 ; j<PRIME.size() and PRIME[j]*PRIME[j] <=a[i] ; j++){
                if(a[i]%PRIME[j]==0){
                    if(m[PRIME[j]]){
                        flag=1;
                        break;
                    }
                    m[PRIME[j]]=1;
                    while(a[i]%PRIME[j]==0){
                        a[i]/=PRIME[j];
                    }
                }
            }
            if(a[i]>1){
                if(m[a[i]]){
                    flag=1;
                }
                m[a[i]]=1;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}