#include <bits/stdc++.h>
using namespace std;

/**
 * Returns the total required dust units.
 *
 * @param n denotes the number of students
 * @param dustUnit denotes the dust unit for each of the students
 */
int totalDustUnits(int n, vector<int> &dustUnit) {
    // Implement this method
    int sum=0;
    for(auto u: dustUnit) if(u>0)sum+=u;
    return sum;
}

/**
 * Takes care of the problem input and output.
 */
int main() {
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        int n;
        scanf("%d", &n);
        vector<int> dustUnit(n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &dustUnit[i]);
        }
        printf("Case %d: %d\n", caseno, totalDustUnits(n, dustUnit));
    }
    return 0;
}