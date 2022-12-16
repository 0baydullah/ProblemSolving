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

    int n;
    cin >> n; 
    int ar[n+1][3];
    map<int,int>mp;
    for(int i=0 ; i<n ; i++){
        cin >> ar[i][0] >> ar[i][1];
        mp[ar[i][0]]++;
    }
    int total = (n-1)*2;
    for(int i=0 ; i<n ; i++){
        int home = n-1 + mp[ar[i][1]];
        int away = total-home;
        cout << home << " " << away << endl;

    }

    return 0;
}