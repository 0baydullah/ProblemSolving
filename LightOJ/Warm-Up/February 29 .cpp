#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int stdt,enddt,styr,endyr; char c;
        string stmon,endmon;
        cin>> stmon >> stdt >> c>>styr >>endmon>>enddt>>c>>endyr;
        if(stmon== "January" or stmon=="February") styr=styr;
        else styr++;
        if(endmon== "January" or(endmon=="February" and enddt<29)) endyr--;

        int ans{0};
        ans+=((endyr/4) - (styr-1)/4);
        ans+=((endyr/400) - (styr-1)/400);
        ans-=((endyr/100) - (styr-1)/100);
        cout << ans << endl;
    }

    return 0;
}