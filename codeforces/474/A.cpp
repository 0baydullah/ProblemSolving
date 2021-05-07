#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    char a;
    string s , x="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> a >> s;

    if(a=='R')
    {
        for(int i=0 ; i< s.size() ; i++)
        {
            for(int j=0 ; j< x.size() ; j++)
            {
                if(s[i]==x[j])
                {
                    cout << x[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0 ; i< s.size() ; i++)
        {
            for(int j=0 ; j< x.size() ; j++)
            {
                if(s[i]==x[j])
                {
                    cout << x[j+1];
                    break;
                }
            }
        }
    }

    return 0;
}
