#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    set <char> username;

    while(cin>>c)
        {username.insert(c);}
    (username.size() % 2 == 0 )? cout << "CHAT WITH HER!" <<endl : cout << "IGNORE HIM!" << endl;

    return 0;
}



/***
#include<bits/stdc++.h>
using namespace std;
char c;
set<char>s;
main(){
while(cin>>c) s.insert(c);
if(s.size()%2==0) cout<<"CHAT WITH HER!"; else cout<<"IGNORE HIM!";
}
**/
