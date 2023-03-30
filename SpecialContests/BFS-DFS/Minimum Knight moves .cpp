#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort(s)  sort(s.begin(),s.end())
#define rsort(s)  sort(s.rbegin(),s.rend())
#define rev(v)    reverse(v.begin(),v.end())

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

vector<vector<int>>g;
bool board[9][9];
int lvl[9][9];
int mn=999999,cnt=0,xxx,yyy;

int X[] = {1, 1, -1, -1, 2, 2, -2, -2};
int Y[] = {2, -2, 2, -2, 1, -1, 1, -1};

bool valid(int x, int y){
    if((x>0 and x<9 and y>0 and y<9 and board[x][y]==0))
        return 1;
    else return 0;
}


int bfs(int i,int j){
    queue<pair<int,int>>q;
    board[i][j]=1;
    lvl[i][j]=0;

    q.push({i,j});

    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();

        for(int i=0 ; i<8 ;i++){
            int tx = tmp.first +X[i];
            int ty = tmp.second +Y[i];
            if(!valid(tx,ty))continue;
            if(!board[tx][ty]){
                q.push({tx,ty});
                board[tx][ty] = 1;
                lvl[tx][ty] = lvl[tmp.first][tmp.second]+1;
            }
        }
    }

    return lvl[xxx][yyy];

}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    int T=1;
    cin >> T;
    for(int t=1 ; t <= T ; t++){
    //  cout << "Case " << t << ": ";
        string aa,bb;
        cin >> aa >> bb;
        int a=aa[0]-'a'+1;
        int b=aa[1]-'0';
         xxx=bb[0]-'a'+1;
         yyy=bb[1]-'0';
        mn=9999999,cnt=0;


        for(int i=0 ; i<9; i++){
            for(int j=0 ; j<9 ; j++){
                board[i][j]=0;
            }
        }

        cout << bfs(a,b) << endl;

    }

    return 0;
}