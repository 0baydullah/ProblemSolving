#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    double x1,y1,r1,x2,y2,r2;
    cin >>x1>>y1>>r1>>x2>>y2>>r2;
    double dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    int ans; if(r1<r2) swap(r1,r2);

    if(dist==0 && r1==r2) ans=-1;
    else if(dist+r2<r1) ans=0;
    else if(dist+r2==r1) ans=1;
    else if(r1+r2==dist) ans=1;
    else if(r1+r2>dist) ans=2;
    else ans=0;

    cout << ans << endl;

    return 0;
}
