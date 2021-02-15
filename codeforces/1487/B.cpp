#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define f first 
#define s second 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll inf=1e18+5;
const int mod=1e9+7;
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<(k-1)%n+1<<"\n";
        }
        else{
            if(2*k>=(n+1))
            cout<<(k+(2*k-n-1)/(n-1))%n+1<<"\n";
            else{
                cout<<(k-1)%n+1<<"\n";
            }
        }
    }
}