#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;
ll a[999999];
ll n;
ll get(int i)
{
    return max(0ll,max(a[i-1],a[i+1])-a[i]+1);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
         cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];

    if (n & 1) {

      ll ans = 0;
      for (int i = 2; i < n; i += 2)
        ans += get(i);

      cout << ans << "\n";
      continue;

    }

    ll tot = 0;
    for (int i = 2; i < n; i += 2)
      tot += get(i);

    ll ans = tot;
    for (int i = n - 1; i > 1; i -= 2) {
      tot -= get(i - 1);
      tot += get(i);
      ans = min(ans, tot);
    }

    cout << ans << "\n";

  }


    return 0;
}
