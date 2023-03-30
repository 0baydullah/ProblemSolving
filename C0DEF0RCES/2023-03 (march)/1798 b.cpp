#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(a) a.begin(), a.end()
#define sort(s) sort(s.begin(), s.end())
#define rsort(s) sort(s.rbegin(), s.rend())
#define rea(a) reaerse(a.begin(), a.end())

#define PI acos(-1)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        //  cout << "Case " << t << ": ";
        int n;
        cin >> n;
        vector<int> a(n);
        map<ll, ll> MAP;
        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
            for (int j = 0; j < a[i]; j++)
            {
                ll x;
                cin >> x;
                MAP[x] = i + 1;
            }
        }
        map<ll, ll> map2;

        for (auto iteratiorx : MAP)
        {
            map2[iteratiorx.second] = iteratiorx.first;
        }
        ll cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            if (map2[i] == 0)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 1)
            cout << "-1\n";
        else
        {
            for (int i = 1; i <= n; i++)
                cout << map2[i] << " ";
            cout << endl;
        }
    }

    return 0;
}