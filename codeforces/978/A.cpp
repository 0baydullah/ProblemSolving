#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0 ; i < n ; i++) cin >> a[i];

    for(int i = n-1 ; i>=0 ; i--)
        for(int j = i-1 ; j >= 0 ; j--)
            if(a[i]==a[j]) a[j]=-1;

    int cnt{0};
    for(int i=0;i<n;i++) if(a[i]!=-1) cnt++;

    cout<<cnt<<endl;

    for(int i=0;i<n;i++) if(a[i]!=-1)cout<<a[i]<<" ";

    cout<<endl;

    return 0;
}
