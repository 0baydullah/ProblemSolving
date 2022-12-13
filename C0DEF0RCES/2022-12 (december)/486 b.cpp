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
    //cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int n,m;
        cin >> n >> m;
        int b[n][m];
        int a[n][m];
        

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                a[i][j]=1;
            }
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin >> b[i][j];
                if(b[i][j]==0){
                    for(int x=0 ; x<m ; x++)
                        a[i][x]=0;
                    for(int x=0 ; x<n ; x++)
                        a[x][j] = 0;
                }
            }
        }

        bool flag=1;
        
        
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(b[i][j]==1){
                    int cnt=0;
                     for(int x=0 ; x<m ; x++)
                        if(a[i][x]==1){
                            cnt++;
                        }
                    for(int x=0 ; x<n ; x++)
                        if(a[x][j]==1){
                            cnt++;
                        }
                    if(cnt>0){}
                    else flag =0;
                }
            }
        } 

        if(flag){
            cout << "YES\n";
            for(int i=0 ; i<n ; i++){
                for(int j=0 ; j<m ; j++){
                    cout << a[i][j]<< " ";
                }
                cout << endl;
            } 
        }
        else cout << "NO\n";
    }

    return 0;
}   