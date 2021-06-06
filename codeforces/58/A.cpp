#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int cnt{0};
    string s,a={"hello"};
    cin >> s;
    for(int i = 0, j =0 ; i < s.size() ; i++)
    {
        if(s[i]==a[j])
        {
            cnt++;
            j++;
            if(cnt==5)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
