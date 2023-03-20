#include<bits/stdc++.h>
using  namespace  std;

set<int>s;

void countDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
                int x=i;
                int y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        countDivisors(n);
        cout<<s.size()<<endl;
        for(auto it:s)cout<<it<<" ";
        cout<<endl;
        s.clear();
    }
}
