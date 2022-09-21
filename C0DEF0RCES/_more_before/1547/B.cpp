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
        deque <char> d;
        for(int i=0 ; i<s.size() ; i++)
        {
           d.push_back(s[i]);
        }
        for(int i= 96+ s.size() ; i>=97 ; i--)
        {
            if(d.back() == i) d.pop_back();
            else if(d.front()==i) d.pop_front();
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if(d.empty()) cout << "YES" << endl;
    }
    return 0;
}
