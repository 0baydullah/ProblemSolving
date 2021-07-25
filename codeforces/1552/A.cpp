#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
bool isBalanced ( char c1, char c2 )
{
    return  ( c1 == '(' && c2 == ')' ) || ( c1 == '{' && c2 == '}' ) || ( c1 == '[' && c2 == ']' );
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string a,x;
        cin >> a;
        x=a;
        sort(a.begin(), a.end());
        if(a==x)
        {
            cout << 0 << endl;
            continue;
        }
        int c{0};
        for(int i=0 ; i<n ; i++)
        {
            if (a[i]==x[i])
            {
                c++;
            }
        }
        cout << n-c << endl;
    }

}
