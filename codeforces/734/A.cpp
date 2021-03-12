#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a{0},d{0};

    cin >> n ;

    char s[n];

    scanf("%s",s);
    //gets(s);

     for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='A') a++;
            else d++;
        }
    if (a==d) cout << "Friendship";
    else a>d ? cout <<  "Anton" : cout << "Danik";
}
