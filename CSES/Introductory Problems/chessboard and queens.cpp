#include "bits/stdc++.h"

#define endl "\n"
#define pb push_back

#define PI acos(-1)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

#define ll long long
#define ull unsigned long long

using namespace std;

char arr[8][8];
ll ans =0;
vector<bool>leftD(20),rightD(20),placedRow(20);
vector<vector<bool>>placed(8,vector<bool>(8));

void almighty_call(int currCol){
    if(currCol == 8){
        ans++;
        return;
    }
    for(int row =0 ; row <8 ; row++){
        if(arr[row][currCol]=='.' and leftD[row-currCol+7]==false and rightD[row+currCol]==false and placedRow[row]== false){
            leftD[row-currCol+7]=rightD[row+currCol] = placedRow[row] =true;
            almighty_call(currCol+1);
            leftD[row-currCol+7]= rightD[row+currCol] = placedRow[row] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    for(int i=0 ; i<8 ; i++){
        for(int j=0 ; j<8 ; j++){
            cin >> arr[i][j];
        }
    }

    almighty_call(0);
    cout << ans << endl;

    return 0;
}