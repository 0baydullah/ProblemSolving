#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

void miryoku()
{
    map<string,int> m;
    int n; cin >> n;
    vector<string>a(n),b(n),c(n);
    for(int i=0 ; i<n;i++) {cin >> a[i];m[a[i]]++;}
    for(int i=0 ; i<n;i++) {cin >> b[i];m[b[i]]++;}
    for(int i=0 ; i<n;i++) {cin >> c[i];m[c[i]]++;}

    int A=0, B=0, C=0;
    for(int i=0 ; i<n ; i++)
    {
        if(m[a[i]]==3) A+=0;
        else if (m[a[i]]==2)A+=1;
        else if (m[a[i]]==1)A+=3;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(m[b[i]]==3) B+=0;
        else if (m[b[i]]==2)B+=1;
        else if (m[b[i]]==1)B+=3;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(m[c[i]]==3) C+=0;
        else if (m[c[i]]==2)C+=1;
        else if (m[c[i]]==1)C+=3;
    }
    cout << A << " " << B << " " << C << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        miryoku();
    }

    return 0;
}