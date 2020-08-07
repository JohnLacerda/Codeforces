#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,c,i;
    bool t=true;
    cin >> a;
    cin >> i;
    cin >> c;
    cin >> b;
 
    if(a!=b){
        t=false;
    }
    if(c>0 && a==0)
        t=false;
    cout << t ? 1 : 0;
    return 0;
}
