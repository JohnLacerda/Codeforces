#include <iostream>
 
using namespace std;
 
long long int mcd(long long int a,long long int b){
    return a%b==0?b:mcd(b,a%b);
}
 
 
int main() {
    long long int n,m,q,sec;
    cin >> n;
    cin >> m;
    cin >> q;
    sec=mcd(n,m);
    for (long long int i = 0; i < q; ++i) {
        long long int sx,sy,ex,ey,divs,dive,setors,setore;
        cin >> sx;
        cin >> sy;
        cin >> ex;
        cin >> ey;
        divs= sx==1?n/sec:m/sec;
        dive= ex==1?n/sec:m/sec;
        setors=(sy-1)/divs;
        setore=(ey-1)/dive;
        cout << (setors==setore?"YES":"NO")<<endl;
    }
    return 0;
}
