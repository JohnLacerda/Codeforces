#include <iostream>
 
using namespace std;
 
int main() {
    int n,k,moves=0,coinsneeded=n;
    cin >> n;
    cin >> k;
    moves=3+(min ((k-1),(n-k))*4)+(max ((k-1),(n-k))*3);
    cout << moves;
 
    return 0;
}
