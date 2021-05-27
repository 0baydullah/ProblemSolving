#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

bool isvwl(char c)
{
    return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    vector <string> v;
    int cnt[] = {5 , 7 ,5};

    for(int i = 0 ; i < 3 ; i++)
    {
        string s;
        char c;
        cin >> c;
        getline(cin,s);
        s = c + s;

        v.push_back(s);
    }

    for (int i = 0 ; i < 3 ; i++)
    {
        int c = 0;
        for (auto u : v[i])
        {
            if(isvwl(u)) c++;
        }
        if (c != cnt[i]) return cout << "NO" , 0;
    }
    cout << "YES";

    return 0;
}
