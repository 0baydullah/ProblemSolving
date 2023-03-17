#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    string x,s; 
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        int N ; cin >> N;getline(cin,x);
        getline(cin,s);
        string ss;

        int n=(s.size()+1)/2;
       // cout << s.size() << " " << s << endl;
        for(int i=0 ; i<n ;i++){
            if(s[i]==' ') continue;
            ss+=s[i];
        }
       // cout << s.size() << endl;
     //  cout << ss.size() << ss << endl;
        cout << isPalindrome(ss) << endl;
    }

    return 0;
}