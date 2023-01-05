#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        long long n,m; 
        cin  >> n >> m;
        vector<int>b(m);
        priority_queue<int, vector<int>, greater<int> > a;
        for(int i=0; i<n ;i++){int x; cin >> x; a.push(x);}
     //   sort(a.begin(),a.end());
        for(int i=0 ; i<m; i++) cin >> b[i];
       // sort(b.rbegin(),b.rend());
        for(int i=0 ; i<m ;i++){
            a.pop();
            a.push(b[i]);
          //  cout << " ---" << a[i] << endl;
        }
        long long sum{0};
        while(!a.empty()){
            sum+=a.top();
            a.pop();
        }
        cout << sum << endl;
    }
    return 0;
}