#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
   ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        set <char> c;
        set <char> :: iterator it;
        for(int i= str.size()-1 ; i>= 0 ; i--)
        {
            if(str[i] == str[i-1])
                i--;
            else
            {
                c.insert(str[i]);
            }
        }
        for(it=c.begin(); it != c.end() ; it++)
            cout<<*it;
        cout<<fuckl;

    }

    return 0;
}
