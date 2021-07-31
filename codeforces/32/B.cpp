#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    string s; cin >> s;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='.')cout << 0;
        else if(s[i]=='-' && s[i+1]=='.'){i++; cout << 1;}
        else {i++; cout <<2;}
    }

    return 0;
}
