#include <iostream>

 using namespace std;

 int main(){

    int variable = 100;
    int *ptr  = &variable;
    int **dptr  = &ptr;


    cout << *(*dptr)  << endl ;


    return 0;
 }
