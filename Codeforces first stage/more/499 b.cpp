#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n , m;
    cin >> n >> m;
    map <string,string> mp;
    string s;

    while(m--)
    {
        string a, b;
        cin >> a>> b;
        if(a.length() > b.length()) mp[a]=b;
        else mp[a] = a;
    }
   while(n--)
   {
        string x; cin >> x;
        cout << mp[x] << " ";
   }



    return 0;
}
