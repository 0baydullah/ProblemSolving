#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int b[n];
    for(int i=0 ; i<n ; i++) cin >> b[i];
    int m;
    cin >> m;
    int g[m];
    for(int i=0 ; i<m ; i++) cin >> g[i];
    sort(b,b+n);
    sort(g,g+m);
    int p=0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(b[i] == g[j] || (b[i]+1) == g[j]|| (b[i]-1) == g[j])
            {
                p++;
                g[j]=993;
                break;
            }
        }
    }
    cout << p << endl;


    return 0;
}
