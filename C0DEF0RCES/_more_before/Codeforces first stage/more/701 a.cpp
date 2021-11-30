#include<bits/stdc++.h>
#define fuckl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector <int> v(n);
    while(n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(int i=0 ; i<n ; i++){

        cout<< v[i] <<"\t";
    }
  //  while(!v.empty())
    {
   //     cout << v[1] << " " << v.back() << fuckl;
  //      v.erase(v.begin());
  //      v.pop_back();
    }

    return 0;
}
