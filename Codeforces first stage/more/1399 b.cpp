#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int cnt;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
     cin >> t;
    while(t--)
    {
        ll cnt{0};
        int n;
        cin >> n;
        ll a[n],b[n];
        ll minA=9999999999999999,minB=99999999999999999;
        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
            minA = min(a[i],minA);
        }

        for(int i=0 ; i<n ; i++)
        {
            cin >> b[i];
            if(minB > b[i]) minB = b[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            int A, B;
            A = a[i]-minA;
            B = b[i]-minB;
          //  cout << "---------------------"<<a[i]<<" " << minA <<" " << A  <<"    "<<b[i]<<" " << minB <<" " <<B << endl;
            cnt += max(A,B);
        }
        cout << cnt << endl;
    }

    return 0;
}
