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

    int v;
    cin>>v;
 
    vector<pair<int, int>> cost;
    for(int i=1; i<=9; i++){
      int c;
      cin>>c;
 
      cost.push_back(make_pair(i, c));
    }
 
    int minCost = INT_MAX;
    int maxDigit = 0;
    for(int i=0; i<9; i++){
      if(cost[i].second <= minCost){
        minCost = cost[i].second;
        maxDigit = cost[i].first;
      }
    }
 
    if(v < minCost){
      cout<< -1;
      return 0;
    }
 
    vector<int> num;
    for(int i=1; i<=(v / minCost); i++){
      num.push_back(maxDigit);
    }
 
    if(v%minCost != 0){
      int availLen = num.size();
      int i = 0;
      int rem = v % minCost;
      while(i<availLen && rem>0){
        for(int j=8; j>=0; j--){
          if(rem+minCost >= cost[j].second){
            num[i] = cost[j].first;
            i++;
            rem = ((rem + minCost) - cost[j].second);
            break;
          }
        }
      }
    }
 
    for(int i=0; i<num.size(); i++)
      cout<<num[i];
}