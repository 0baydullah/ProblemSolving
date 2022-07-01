#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;



int main(){

    int t; cin >> t;
    while (t--)
    {
        int flag{0};
        string s; cin >> s;
        if((s[s.size()-1]-'0')%2==0) cout << 0 << endl;
        else if((s[0]-'0')%2 == 0) cout << 1 << endl;
        else 
        {
            for(int i=0 ; i<s.size() ; i++)
            {
                if((s[i]-'0')%2==0) {flag =1; break; }
            }
            flag ? cout << 2 << endl : cout << -1 << endl; 
        }
    }

    return 0;
}