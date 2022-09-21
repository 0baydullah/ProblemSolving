#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int flag = 0;

        for ( int i=0 ; i <n-1 ; i++)
        {
            if(s[i]=='0' && s[i+1] != '0') flag++;

        }

        if(s[n-1]=='0') flag ++;
     ///       found = 1;

    ///    cout << found << endl; ///;;;;;;;;;;;; The fucking debug Line :)
        cout<< min(flag,2) << endl;

    }
    return 0;
}