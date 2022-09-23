#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int Digit_Count(int n){
    return int(log10(n)+1);
}

void miryoku()
{
    int n; cin >> n;
    priority_queue<int> a,b;
    for(int i=0 ; i<n; i++){
        int x; cin >> x;
        a.push(x);
    }
    for(int i=0 ; i<n; i++){
        int x; cin >> x;
        b.push(x);
    }
    int cnt{0};
    while(!a.empty()){
        if(a.top()==b.top()){
            a.pop();
            b.pop();
        }
        else if(a.top()>b.top()){
            int x = a.top();
            a.pop();
            a.push(Digit_Count(x));
            cnt++;
        }
        else if(a.top()<b.top()){
            int x = b.top();
            b.pop();
            b.push(Digit_Count(x));
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}