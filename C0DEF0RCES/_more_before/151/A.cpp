#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int n,k,l,c,d,p,nl,np;
    cin >> n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l;
    int slice = c*d;
    int by_drink = drink/nl;
    int by_salt = p/np;
    cout << (min(min(slice,by_drink),min(slice,by_salt))/n);
    return 0;
}
