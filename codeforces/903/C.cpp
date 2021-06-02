#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

const int mx = 5e3+123;
int a[mx];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    map <int,int> cnt;

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
     int ans = 0;
    for(int i=0 ; i<n ; i++)
    {
        ans = max(ans,cnt[a[i]]);
    }
    cout << ans;

    return 0;
}
