#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int prime[N];

void sieve(int n){
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            for(int j=i*i ; j<=n ; j+=i){
                prime[j]=1;
            }
        }
    }

    if(n>=2){
        cout << 2 << endl;
    }
    for(int i=3 ; i<=n ; i+=2){
        if(prime[i]==0){
            cout << i << " ";
        }
    } cout << endl;
}

int main(){
    int n ; cin >> n;
    sieve(n);
}