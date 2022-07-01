#include<bits/stdc++.h>

#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;



using namespace std;


int isPal(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return 1;
    }
    // Otherwise
    else {
        // return "No"
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    ll t; cin >> t; while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(k>0 && !isPal(s))
            cout << 2 << endl;
        else cout << 1 << endl;

    }

    return 0;
}
