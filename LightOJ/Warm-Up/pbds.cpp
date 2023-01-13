#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#define ll long long
using namespace std;
using namespace __gnu_pbds;

typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> pbds;

int main()
{
    pbds s;

    s.insert(2);
    s.insert(96);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(9);
    s.insert(1);
    s.insert(69);
    s.insert(0);

    int size = s.size();
    cout << size << endl << endl;
    
    for(int i=0 ; i<size ; i++) 
        cout << *s.find_by_order(i) << " "; // 0 1 2 4 9 69 96order_of_key returns the position of a given element:
    cout << endl << endl;

    auto x = s.find_by_order(007);
    //find_by_order returns iterator to the element at the given position
    cout << *x << endl << endl; // 69

    //order_of_key returns the position of a given element
    cout << s.order_of_key(69) << endl << endl; //6

    cout << s.order_of_key(99) << endl;
    cout << s.order_of_key(96) << endl;
    

    return 0;
}