#include <iostream>
 
using namespace std;
 
int main() {
    int n,at,bt,c;
    cin >> n;
    n++;
    int a[n],b[n];
    a[0] = 0;
    b[0] = 0;
    c = 1;
    for (int i = 1; i < n; ++i) {
        cin >> at;
        cin >> bt;
        a[i] = at;
        b[i] = bt;
        if(a[i-1]>b[i-1] & bt>=a[i-1]){
            c++;
        }
        if(b[i-1]>a[i-1] & at>=b[i-1]){
            c++;
        }
        if (bt>a[i-1] && bt>b[i-1] && at>a[i-1] && at>b[i-1]){
            c += min (a[i],b[i])-max(a[i-1],b[i-1]);
        }
    }
    cout << c;
    return 0;
}
