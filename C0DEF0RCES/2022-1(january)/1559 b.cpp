#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        string s, a, b; cin >> s;

        for(int i=0 ;i < n ; i++)
        {
            if(s[i]== '?')
                continue;
            else
            {
                for(int j=i-1 ;j >= 1 ; j--)
                {
                    if(s[j+1]== 'B')
                        s[j]='R';
                    else if(s[j+1]=='R')
                        s[j] = 'B';
                }
                break;
            }
        }
        if(s[0]== '?')
        {
            if(s[1]== 'B')
                s[0]='R';
            else if(s[1]=='R')
                s[0] = 'B';
            else s[0] = 'B';
        }
        for(int i=1 ;i < n ; i++)
        {
            if(s[i]== '?')
                {
                    if(s[i-1]== 'B')
                        s[i]='R';
                    else if(s[i-1]=='R')
                        s[i] = 'B';
                }

        }


        cout << s << endl;
    }

    return 0;
}
