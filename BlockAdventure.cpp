#include <iostream>
 
using namespace std;
 
long long int mod(int x){
    return x >= 0 ? x : -x;
}
 
int main() {
    long long int t;
    cin >> t;
    for (long long int i = 0; i <t ; ++i) {
        long long int n,m,k;
        cin >> n;
        cin >> m;
        cin >> k;
        long long int columns[n];
        for (long long int j = 0; j <n ; ++j) {
            cin >>columns[j];
        }
        long long int gildong=0;
        bool wecan= true;
        while(gildong!=n-1){
            if((columns[gildong]+k)>=columns[gildong+1]){
                m+=(columns[gildong]+k)-columns[gildong+1];
                if(k>columns[gildong+1]){
                    m-=k-columns[gildong+1];
                }
                gildong++;
            }else{
                m-=columns[gildong+1]-(columns[gildong]+k);
                if(m<0){
                    wecan=false;
                    break;
                }
                gildong++;
            }
        }
        cout << (wecan?"YES":"NO")<<endl;
    }
    return 0;
}
