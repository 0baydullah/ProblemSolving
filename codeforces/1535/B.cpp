#include<bits/stdc++.h>
#define endl "\n"
 
typedef long long ll;
typedef unsigned long long ull;
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int t;cin >> t ;while (t--)
    {
        int n,cnt{0}; cin >> n ;
        int even{0},odd{0};
        vector<int> v;
        for (int i=0; i<n; i++)
        {
            int x; cin >> x;
            if (x%2==1)  v.push_back(x) ;
            else even++;
        }
        odd = v.size();
        cnt = (even * (even-1)) / 2 + (even*odd);
        for(int i=0 ; i<odd ; i++)
            for(int j=i+1 ; j<odd ; j++)
                if(gcd(v[i],2*v[j]) > 1) cnt++;
        cout << cnt << endl;
    }
}
