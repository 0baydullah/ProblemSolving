#include<bits/stdc++.h>
#include<stdio.h>
#define fuckl "\n"
using namespace std;

int j;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    for(int i= 1 ; i<s.size() ; i++)
    {
        if(s[i]>'Z'){
            cout << s<<endl;
            return 0;
        }
    }
    for(int i= 0; i<s.size() ; i++)
        if(s[i]<'a') {
                s[i] += 32;
                j++;
        }
    if (j==s.size())
    {
        cout << s << endl;
        return 0;
    }

    if(s[0] > 'Z') s[0] -= 32;

    cout <<s<<endl;
    return 0;
}
