#include<bits/stdc++.h>
#define ll long long 

using namespace std;

bool possible(vector<int>a,int n,int k){
    multiset<int>s;
    for(auto i: a){
        s.insert(i);
    }
    for(int i=1 ; i<=k ; i++){
        if(s.empty())return false;
        int x=k-i+1;
        auto it=s.upper_bound(x);
        if(it==s.begin()) return false;
        it--;
        s.erase(it);
        if(!s.empty()){
            it=s.begin();
            ll v=(*it);
            v+=x;
            s.erase(it);
            s.insert(v);
        }
    }
    return true;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0 ; i<n; i++) cin >> a[i];

    int k; 
    int low=0 ,high=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(possible(a,n,mid)){
            k=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout << k << endl;
  }
  return 0;
}
