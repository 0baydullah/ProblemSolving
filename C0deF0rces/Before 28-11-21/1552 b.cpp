#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        map<int,int> m;
        int n; cin >> n;
        int a[n][6],b[n]={0},pos,mx=500000,cnt{0};
      for(int i=0; i<n ; i++)
        {int temp=0;
            for(int j=0 ;   j<5 ; j++)
            {

                cin >> a[i][j];
                temp += a[i][j];
                b[i]+= a[i][j];
            }
            if(temp<mx){
                pos = i;
                mx=temp;
            }

        }


        for(int i=0 ;i<=n ; i++)
        {
            if(b[i]==b[pos])
            {
                cnt++;
            }
        }
         if (cnt !=1) cout << -1 << endl;
         else cout << pos+1  << endl;

         //   for(int i= 0 ;i < n ;i++) cout << b[i] << '\t' ;
    }

    return 0;
}
