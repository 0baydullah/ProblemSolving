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
        vector<int> v (n);
        for(auto &u : v) cin >> u;
        while(v.back()==0) v.pop_back();
        reverse(v.begin(),v.end());
        while(v.back()==0) v.pop_back();
        cout << count(v.begin(),v.end(),0) << endl;
    }

    return 0;
}
