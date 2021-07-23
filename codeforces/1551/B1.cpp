#include<bits/stdc++.h>
 
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
 
    ll t; cin >> t ;
    while (t--)
    {
        int c{0},C{0};
        map <char,int> m;
       string s; cin >> s;
       for(int i=0 ; i<s.size() ; i++)
       {
           m[s[i]]++;
       }
       for(auto u : m)
       {
            if(u.second>1) c++;
            else if(u.second==1) C++;
       }
       cout << c + (C/2) << endl;
    }
}