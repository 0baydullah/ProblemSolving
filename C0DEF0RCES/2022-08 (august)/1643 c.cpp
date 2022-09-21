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
        int n, k;
        cin >> n >> k;
        if(k==1 or n%2==0)
        {
            cout << "YES\n";
            int odd=1 , eve = 2;
            for(int i=1 ; i<=n ; i++)
            {
                for(int j=1 ; j<=k ; j++)
                {
                    if(i&1)
                    {
                        cout << odd << " ";
                        odd+=2;
                    }
                    else
                    {
                        cout << eve << " ";
                        eve +=2;
                    }
                }
                cout << endl;
            }
        }
        else cout << "NO\n" ;
    }
    return 0;
}
