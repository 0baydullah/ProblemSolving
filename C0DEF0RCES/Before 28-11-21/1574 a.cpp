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
        int n; cin >> n;
        for(int i=0 ; i<n ;i++)
        {
            string s;
            for(int j=0 ; j <= i ; j++) s += "(";
            for (int j = 0 ; j<=i ; j++) s+= ")";
            for(int j = i+1 ; j <n ; j++) s+="()";
            cout << s<<endl;

        }
    }

    return 0;
}
