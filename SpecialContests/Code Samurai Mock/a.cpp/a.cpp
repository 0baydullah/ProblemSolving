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
//ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);
    
    string line,line2;
    string s;
    vector<string> v;
 map <char,int> m;
    while (std::getline(std::cin, line))
    {
        if (line[0]=='-' and line[1]=='-') {
            break;
        }
        line+=line;
    }
    

     while (std::getline(std::cin, line2))
    {
        
        if (line2.empty()) {
            break;
        }
        line2+=line2;
    }

    sort(line.begin(),line.end());
    sort(line2.begin(),line2.end());
    if(line==line2) cout << "same\n";
    else cout << "different\n";
    cout << line.size() << " " << line2.size() << el;

    // for(int i=0 ; i<line.size() ; i++) m[line[i]]++;
    // bool key=1;
    // for(auto i :m){
    //     if(i.second & 1 ){
    //         cout << "different\n";
    //         break;
    //         key=0;
    //     }
    // }
    // if(key) cout << "same\n";
   
    return 0;
}