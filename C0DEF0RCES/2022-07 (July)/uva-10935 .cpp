#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

  //  ll t; cin >> t; for(int T=1 ; T<=t ; T++)
    while(1)
    {
        cin >> n;
        if(n==0)return 0;
        else if(n==1)
        {
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: " << 1 << endl;
        }
        else
        {
            vector<int>discarded;
            deque<int>deck;
            for(int i=1 ; i<=n ; i++)
                deck.pb(i);
            while(deck.size()!=1)
            {
                discarded.pb(deck.front());
                deck.pop_front();
                int x=deck.front();
                deck.pop_front();
                deck.pb(x);
            }
            cout << "Discarded cards: " << discarded[0];
            for(int i=1 ; i<discarded.size() ; i++)
                cout << ", " << discarded[i];
            cout << endl;
            cout << "Remaining card: " << deck.front() << endl;
        }


    }

    return 0;
}
