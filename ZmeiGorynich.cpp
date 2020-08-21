#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i <t ; ++i) {
        long long int n,x;
        cin >> n;
        cin >> x;
        long long int blowsdamage[n],blowsheadgrowth[n],biggestdamage,mostefficientefficiency;
        cin>>blowsdamage[0];
        cin>>blowsheadgrowth[0];
        biggestdamage=blowsdamage[0];
        mostefficientefficiency=blowsdamage[0]-blowsheadgrowth[0];
        for (int j = 1; j < n; ++j) {
            cin >> blowsdamage[j];
            cin >> blowsheadgrowth[j];
            if(biggestdamage<blowsdamage[j]){
                biggestdamage=blowsdamage[j];
            }
            if(mostefficientefficiency<(blowsdamage[j]-blowsheadgrowth[j])){
                mostefficientefficiency=blowsdamage[j]-blowsheadgrowth[j];
            }
        }
        if(biggestdamage>=x){
            cout << 1 <<endl;
        }else if(mostefficientefficiency<=0){
            cout << -1 <<endl;
        }else{
            long long int blowsneeded;
            blowsneeded=((x-biggestdamage)/mostefficientefficiency)+(((x-biggestdamage)%mostefficientefficiency)==0?1:2);
            cout << blowsneeded << endl;
        }
    }
    return 0;
}
