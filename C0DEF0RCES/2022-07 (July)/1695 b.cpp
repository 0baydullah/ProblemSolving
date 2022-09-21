#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n; cin >> n;
        int a[n];
        int key{-1};
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }
        if(n%2)
            cout << "Mike" << endl;
        else{
                int mn= INT_MAX;
            for(int i=0; i<n ; i++)
            {
                if(a[i]<mn)
                {
                    mn=a[i];
                    key=i;
                }
            }
            if((key+1)%2)
                cout << "Joe" << endl;
            else cout << "Mike" << endl;
        }
    }

    return 0;
}
