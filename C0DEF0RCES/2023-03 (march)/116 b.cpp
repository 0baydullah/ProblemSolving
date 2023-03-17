#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

char a[13][13];

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n ,m;
    cin >> n >> m;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m ; j++){
            cin >> a[i][j];
        }
    }
    int cnt{0};
    for(int i=1; i<=n;i++){
        for(int j=1; j<=m ; j++){
            if(a[i][j]=='W'){
                if(a[i-1][j]=='P'){
                    cnt++;
                    a[i-1][j]='x';
                    a[i][j]='x';
                }
                else if(a[i][j-1]=='P'){
                    cnt++;
                    a[i][j-1]='x';
                    a[i][j]='x';
                }
                else if(a[i][j+1]=='P'){
                    cnt++;
                    a[i][j+1]='x';
                    a[i][j]='x';
                }
                else if(a[i+1][j]=='P'){
                    cnt++;
                    a[i+1][j]='x';
                    a[i][j]='x';
                }
            }
        }
    }
    cout << cnt <<  endl;

    return 0;
}