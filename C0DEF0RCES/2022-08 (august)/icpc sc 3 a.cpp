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
        string s; cin >> s;
        int cnt{0};
        int n=s.size();
        for(int i=0 ; i<n; i++)
        {
            if(s[i]=='A' || s[i]=='H' || s[i]=='M' || s[i]=='O' || s[i]=='T' || s[i]=='U' || s[i]=='V' || s[i]=='W' || s[i]=='Y' || s[i]=='I' || s[i]=='X')
            {
                cnt++;
            }
        }

            if(cnt==n)
            {
                if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
                    cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else cout << "NO" <<endl;
    }

    return 0;
}
