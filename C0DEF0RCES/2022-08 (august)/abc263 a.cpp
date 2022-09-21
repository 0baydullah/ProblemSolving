#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

 //   ll t; cin >> t; while(t--)
    {
        set<int>s;
        for(int i=0 ; i<5 ; i++)
        {
            int a; cin >> a;
            s.insert(a);
        }
        if(s.size()<=2)
            cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
