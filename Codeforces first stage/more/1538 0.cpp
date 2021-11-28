#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;

    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0 ; i<n ; i++) cin >> a[i];
        int big=a[0], small=a[0],s,b;
        for (int i=0 ; i<n ; i++)
        {
            if(a[i]< small)
            {
                small=a[i];
                s=i;
            }
             if(a[i] > big)
            {
                big=a[i];
                b=i;
            }
        }
        s+=1;
        b+=1;
        if (s <= n/2 && b <= n/2)cout << max(s,b) << endl;
        else if (s >= n/2 && b >= n/2)cout << max(n-s,n-b)+1 << endl;
        else if (s <= n/2 && b >= n/2) cout <<min(max(n-s,n-b),s+n-b)+1 << endl;
        else if (s >= n/2 && b <= n/2) cout <<min(max(n-s,n-b),n-s+b)+1 << endl;
    }

    return 0;
}
