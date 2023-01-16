#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int bin_to_dec(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
         base = base * 2;
    }
    return dec_value;
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": ";
        int a,b,c,d;
        char ch;
        int A,B,C,D;
        cin >>a>>ch>>b>>ch>>c>>ch>>d>>A>>ch>>B>>ch>>C>>ch>>D;
        A=bin_to_dec(A);
        B=bin_to_dec(B);
        C=bin_to_dec(C);
        D=bin_to_dec(D);
        
        if(a==A and b==B and c==C and d==D) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}