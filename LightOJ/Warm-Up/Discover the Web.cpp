#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
      cout << "Case " << t << ": \n";
        string x;
        stack<string>st,st2; st.push("http://www.lightoj.com/");
        while(cin >> x){
            if(x=="QUIT") break;
            if(x=="VISIT"){
                string s; cin >> s;
                cout << s << endl;
                st.push(s);
                while(!st2.empty())
                    st2.pop();
            }
            if(x=="BACK"){
                if(st.size()==1) {
                    cout << "Ignored\n";
                    continue;
                }
                string s= st.top();
                st2.push(s);
                st.pop();
                cout << st.top() << endl;
            }
            if(x=="FORWARD"){
                if(st2.empty()) {
                    cout << "Ignored\n";
                    continue;
                }
                string s = st2.top();
                st.push(s);
                st2.pop();
                cout << st.top() << endl;
            }
        }
    }

    return 0;
}