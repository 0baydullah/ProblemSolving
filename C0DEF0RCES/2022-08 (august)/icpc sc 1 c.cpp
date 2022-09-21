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
        int n; cin >> n;
        int l=0 ,r=0;
        string s; cin >> s;
        s.pb('b');
        int key=0;
        int cnt=0;
        for(int i=0 ; i<=n ; i++)
        {
            if(s[i]=='a')
                key=1;
            if(s[i]=='b')
            {
                if(key==1)
                {
                    cnt+=i-l;
                    key=0;
                }
                l=i+1;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
