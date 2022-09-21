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
        vector < int > a(n);
        map<int , int >m;
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        if(is_sorted(a.begin(),a.end()))
        {
            cout << 0 << endl;
            continue;
        }
        int cnt =-1;
        for(int i=n-1 ; i>0 ; i--)
        {
            if(a[i]<a[i-1])
            {
                cnt=i;
                m[a[i]] = max(i,m[a[i]]);
                break;
            }
            m[a[i]] = max(i,m[a[i]]);
        }
        if(cnt==-1) cout << 0 << endl;
        else{
            set<int> s;
            for(int i=0 ; i<cnt ; i++)
            {
                cnt = max(cnt,m[a[i]]);
                s.insert(a[i]);
            }
            cout<< s.size() << endl;
        }
    }

    return 0;
}
