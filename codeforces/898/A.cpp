#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    long long n;
    cin >> n;
    if(n%10 == 0) cout << n << fuckl;
    else if (n%10 <= 5) cout << n - n%10  << fuckl;
    else cout << n+(10-(n%10)) << fuckl;

    return 0;
}
