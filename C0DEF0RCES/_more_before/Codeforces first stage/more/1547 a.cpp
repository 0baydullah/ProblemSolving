#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int t;
    cin >>t ;
     while (t--)
     {
         int ax,ay,bx,by,fx,fy;
         cin>> ax>>ay>>bx>>by>>fx>>fy;
         if(ax==ay && bx==by) cout << abs(ax-bx) + abs(ay-by)<< endl;
         else if (ax == bx && ax == fx && (min(ay,by)<fy && max(ay,by)>fy))cout << abs(ay-by)+2<<endl;
         else if (ay == by && ay == fy&& (min(ax,bx)<fx && max(ax,bx)>fx)) cout <<abs(ax-bx)+2<<endl;
        else cout << abs(ax-bx) + abs(ay-by)<<endl;
     }

    return 0;
}
