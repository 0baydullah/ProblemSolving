#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

bool twoStrings(string s1, string s2) {
 
  // vector for storing character occurrences
  vector<bool> v(MAX_CHAR, 0);
 
  // increment vector index for every
  // character of str1
  for (int i = 0; i < s1.length(); i++)
    v[s1[i] - 'a'] = true;
 
  // checking common substring of str2 in str1
  for (int i = 0; i < s2.length(); i++)
    if (v[s2[i] - 'a'])
       return true;
  
  return false;       
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        
    }

    return 0;
}