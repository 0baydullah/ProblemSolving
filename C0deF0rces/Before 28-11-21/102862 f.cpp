#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n;
    cin >> n;
    int N=n;
    set<int> a;
    while(n--)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    if(a.size()==N)cout << "NO" << endl;
    else cout << "Yes" << endl;

    return 0;
}
