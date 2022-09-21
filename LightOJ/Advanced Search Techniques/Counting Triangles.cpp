#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n, t;
    cin>>t;
    for(int cas = 1;cas<=t;cas++)
    {
        cin>>n;
        vector<int> a;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll cnt = 0LL;
        for(int i = 0;i<n;i++) for(int j = i+1;j<n-1;j++)
        {
            int ind = upper_bound(a.begin(), a.end(), a[i]+a[j]-1) - a.begin()-1;
            cnt+= ind - j;
        }
        cout << "Case " << cas << ": " << cnt << "\n";
    }

    return 0;
}
