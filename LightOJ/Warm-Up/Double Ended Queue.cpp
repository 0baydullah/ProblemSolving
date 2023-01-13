#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": \n";
        int n,m; cin >> n >> m;
        deque<int>dq;
        string s;
        while(m--){
            cin >> s;
            if(s=="pushLeft"){
                int x; cin >> x;
                if(dq.size()<n){
                    dq.push_front(x);
                    cout<< "Pushed in left: "<< x << endl;
                } 
                else cout << "The queue is full\n";
            }
            if(s=="pushRight"){
                int x; cin >> x;
                if(dq.size()<n){
                    dq.push_back(x);
                    cout<< "Pushed in right: "<< x << endl;
                } 
                else cout << "The queue is full\n";
            }
            if(s=="popLeft"){
                if(dq.size()){
                    int x=dq.front();
                    cout<< "Popped from left: "<< x << endl;
                    dq.pop_front();
                } 
                else cout << "The queue is empty\n";
            }
            if(s=="popRight"){
                if(dq.size()){
                    int x=dq.back();
                    cout<< "Popped from right: "<< x << endl;
                    dq.pop_back();
                } 
                else cout << "The queue is empty\n";
            }
        }
    }

    return 0;
}