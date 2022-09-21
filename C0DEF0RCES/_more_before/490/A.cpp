#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    vector<int> _1, _2, _3;

    int n;
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        int x; cin >> x;
        if(x==1) _1.push_back(i+1);
        else if(x==2) _2.push_back(i+1);
        else _3.push_back(i+1);
    }
    int x = min({_1.size(),_2.size(),_3.size()});
    cout << x << endl;

    for(int i=0 ; i<x ; i++)
    {
        cout << _1[i] << " " << _2[i] << " " << _3[i] << endl;
    }

    return 0;
}
