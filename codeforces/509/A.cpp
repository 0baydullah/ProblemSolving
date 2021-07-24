#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
    int n;
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++){
        ar[0][i]=1;
    }
    for(int i=0;i<n;i++){
        ar[i][0]=1;
    }
    int max=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            ar[i][j]=ar[i][j-1]+ar[i-1][j];
            if(ar[i][j]>max)
            max=ar[i][j];
        }
    }
    cout<<max<<endl;
}