#include "bits/stdc++.h"

#define endl "\n"

#define ll long long
#define ull unsigned long long

using namespace std;

ll container[1000009];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll p;
    cin >> p;

    for(int i=0 ; i<p ; i++){
        container[i]=-1;
    }

    for(ll i=0 ; i<p; i++){
        ll mod {(i*i)%p}; 
        if(container[mod]==-1){
            container[mod] = i;
        }
    }

    for(int i=0 ; i<p ; i++){
        cout << container[i] << " ";
    }
    
    cout << endl;

    return 0;
}