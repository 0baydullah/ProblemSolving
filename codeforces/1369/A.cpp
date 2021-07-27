#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%4){
            cout<<"no"<<endl;
        }
        else
            cout<<"yes"<<endl;
    }
    return 0;
}