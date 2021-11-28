#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        stack <char> st;
        while(n--)
        {
            char x;
            cin >> x;
            if(x == '(')
            {
                st.push(x);
            }
            else if(x == ')' && !st.empty())
            {
                st.pop();
            }
        }
            cout << st.size() << endl;
    }

    return 0;
}
