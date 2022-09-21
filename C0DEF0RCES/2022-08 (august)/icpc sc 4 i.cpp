#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;



int big_mod(int base, int power, int mod)
{
    if(power==0)    return 1;
    //কোন কিছুর power 0 হলে তার মান 1 হয়ে যায়
    else if(power%2==1) //power বেজোড় হলে
    {
        int p1 = base % mod;
        int p2 = (big_mod(base,power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else if(power%2==0) //power জোড় হলে
    {
        int p1 = (big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}


int main()
{
  //  ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ull a,b,c;
    while(cin >> a >> b >> c)
    {


        ull x = big_mod(a,b,c);
        cout <<x<< endl;

    }

    return 0;
}
