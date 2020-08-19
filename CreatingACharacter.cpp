#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i <t ; ++i) {
        long long int str,intl,exp;
        cin >> str;
        cin >> intl;
        cin >> exp;
        long long int builds;
        if(str<=intl){
            exp+=str-(intl+1);
            str=intl+1;
        }
        if(exp<0){
            builds=0;
        }else if(exp==0) {
            builds = 1;
        }else{
            long long int maxintinv = ((exp<=(str-1-intl))?exp:(str-1-intl))+((exp-((exp<=(str-1-intl))?exp:(str-1-intl)))/2);
            builds = maxintinv+1;
        }
        cout << builds << endl;
    }
    return 0;
}
