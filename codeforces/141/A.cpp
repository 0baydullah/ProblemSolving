#include<bits/stdc++.h>
main(){
  std::string a,b,c;
  std::cin>>a>>b>>c;
  a+=b;
  sort(a.begin(),a.end());
  sort(c.begin(),c.end());
  (a==c)?puts("YES"):puts("NO");
}
