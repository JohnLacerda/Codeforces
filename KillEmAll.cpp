#include <iostream>
#include <algorithm>
 
using namespace std;
 
long long int mod(int a){
    return (a>=0)?a:-a;
}
 
long long int gcd(long long int a,long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long int n,r;
        cin >> n;
        cin >> r;
        long long int x[n];
        for (int j = 0; j <n ; ++j) {
            cin >> x[j];
        }
        sort(x,x+n);
        long long int c=0;
        long long int aux =-1;
        for (int k = n-1; k >= 0; k--) {
            if((x[k]-(c*r))>0 && x[k]!=aux){
                c++;
            }
            aux=x[k];
        }
        cout << c<<endl;
    }
    return 0;
}
