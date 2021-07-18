#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;int N = n;
       string a ; int b{0},c{0};
       while(n--)
       {
            char x; cin>>x; a += x;
       }
       for (int i = a.size()-1; i >= 0; i--)
       {
           if(a[i]==')') b++;
           else break;
       }
       
        if( N-b < b) cout << "Yes"  <<endl;
            else cout << "no" << endl;
    }
 
    return 0;
}