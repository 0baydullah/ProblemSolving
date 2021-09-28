#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t;cin >> t ;while (t--)
    {
        string s;cin>>s;
        
            int a{0} ,b{0},c{0};
            for(int i = 0 ; i < s.size() ; i++)
            {
                if(s[i]=='A') a++;
                else if(s[i]=='B') b++;
                else c++;
            }
            if (a+c == b) cout << "YES" << endl;
                else  cout << "NO" endl;
        
    }
}


