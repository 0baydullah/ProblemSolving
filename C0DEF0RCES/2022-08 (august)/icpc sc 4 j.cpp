#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;



int BigMod(long long B,long long P,long long M)
{
long long R=1;
while(P>0)
{
    if(P==0) return 1;
    if(B==1) return B;
if(P%2==1)
{
R=(R*B)%M;
}
P/=2;
B=(B*B)%M;
}
return R%M;
}


int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ull t; cin >> t; while(t--)
    {
        ull a,b,c;
        ull M=pow(10,9)+7;
        cin >> a >> b >> c;
        ull x = BigMod(a,BigMod(b,c,M),M);
        cout <<x%M<< endl;

    }

    return 0;
}
