#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    int n; cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++) cin >> a[i];

    int st=-1;
    int en=n;
    bool flag = 1;
    
    for(int i=1 ; i<n ; i++){
        if(flag){
            if(a[i]<a[i-1]){
                flag=0;
                st=i-1;
            }
        }
        else{
            if(a[i]>a[i-1]){
                en=i;
                break;
            }
        }
    }

    if(st != -1 ){
        reverse(a+st,a+en);
        for(int i=1 ; i<n; i++){
            if(a[i]<a[i-1]){
                flag =false;
                break;
            }
            else{
                flag = true;
            }

        }
    }

    if(flag){
        cout << "yes\n";
        if(st==-1){
            cout << "1 1\n";
        }
        else{
            cout << st+1 << " " << en <<"\n";
        }
    }
    else cout << "no\n";
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
  //  cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}