#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {

        int n, x,sum{0},nCnt{0},sumx{0};
        cin >> n >> x;
        int a[n];
        vector<int>v;
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i]==x) nCnt++;
        }
        sort(a,a+n);
        if(nCnt == n || sum == x){
                cout << "NO" << endl;
                continue;}
        else{
            cout << "YES" << endl;
            for(int i=n-1 ; i>=0 ; i--)
            {
                sumx += a[i];
                if(sumx == x){
                    sumx -= a[i];
                    v.push_back(a[i]);
                }
                else cout << a[i] << " ";
            }
        }
        for(int i=0 ; i<v.size() ; i++) cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}
