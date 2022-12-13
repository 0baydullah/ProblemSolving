#include "bits/stdc++.h"
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
    for(auto x:PRIME)
        cout << x << " " ;

    return 0;
}