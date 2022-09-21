#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; while(t--)
    {
        string s="abccbaacz";
          int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        char aa;
        for(int i=0 ; i<26 ; i++)
        {
            a[s[i]-'a']+=1;
            if(a[s[i]-'a']==2){cout << s[i];
            break;}
        }

    }

    return 0;
}
