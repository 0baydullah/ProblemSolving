#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2)
{
    if(p1.first < p2.first) return 1;
    else if (p1.first == p2.first) return (p1.second > p2.second);
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int s, n;
    cin >> s >> n;
   vector <pair<int, int>> v(n);
   for(int u= 0 ; u < n ; u++)
    cin>>v[u].first >> v[u].second;

    sort(v.begin(),v.end(),cmp);
   for (int u= 0 ; u < n ; u++)
   { ///cout << "u.firsteeee " << v[u].first << " t " << s << " " << v[u].second <<endl;
       if(v[u].first < s) s += v[u].second;
        else
       {
           cout << "NO" << fuckl;
           return 0;
       }

   }
   cout << "YES" << fuckl;

    return 0;
}
