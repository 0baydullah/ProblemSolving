#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        int n; int k; cin >> n >> k;
        vector<int> a,b;
        for ( int i=0 ; i<n ; i++)
        {
            int x; cin >> x; a.push_back(x);
        }
        for ( int i=0 ; i<n ; i++)
             {
            int x; cin >> x; b.push_back(x);
        }

        sort(b.begin(),b.end(),greater<int>());


        for ( int i=0 ; i<k ; i++)
        {
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end(),greater<int>());

       int sum{0};

       for ( int i=0 ; i<n ; i++)
       {
           sum += a[i];
       }


        cout <<sum<< endl;
    }

    return 0;
}
