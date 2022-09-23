#include<bits/stdc++.h>

using namespace std;

const int N = (int) 1e6+5;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



vector<int> adj[N];
int CC;
vector<bool> visited;

void DFS(int curr){
    visited[curr]=true;
    for(auto i:adj[curr]){
        if(!visited[i]){
            DFS(i);
        }
    }
}


int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        string s;           cin>>s;
        n*=2;
        for(int i=0;i<=n;i++)adj[i].clear();
        visited.assign(n+1,false);
        CC=0;

        
        stack<pair<char,int>> stx;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stx.push({s[i],i});
            }
            else{
                int u=i;
                int v=stx.top().second;
                adj[u].push_back(v);
                adj[v].push_back(u);
                stx.pop();
            }
        }
        
        for(int i=0;i<n-1;i++){
            if(s[i]==')' and s[i+1]=='('){
                adj[i].push_back(i+1);
                adj[i+1].push_back(i);
            }
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                CC++;
                DFS(i);
            }
        }

        cout<<CC<<endl;
    }
    return 0;
}
