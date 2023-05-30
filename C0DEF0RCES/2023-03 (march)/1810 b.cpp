#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

ll n; 
ll cnt=1;
ll flag=0;

ll op1(int x){
    return 2*x-1;
}
ll op2(int x){
    return 2*x+1;
}


void code(){
    int n; cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    vector<int>result;
    while(n>1){
        if(((n+1)/2)%2){
            result.push_back(1);
            n++; n/=2;
        }
        else{
            result.push_back(2);
            n--; n/=2;
        }
    }
    rev(result);
    cout<<result.size()<<endl;
    for(auto i:result) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        code();
    }

    return 0;
}