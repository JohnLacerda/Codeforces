#include <iostream>
 
using namespace std;
 
 
int main() {
    long long int n,m,k,b=0,b2=0;
    long long int maximumHappiness=0;
    cin >> n;
    cin >> m;
    cin >> k;
 
    int happiness[n];
    for (int i = 0; i < n ; i++) {
        cin >> happiness[i];
        if(happiness[i]>=b){
            b2=b;
            b=happiness[i];
        }else if(happiness[i]>b2){
            b2=happiness[i];
        }
    }
    maximumHappiness += k*(m/(k+1))*b+(m%(k+1))*b+b2*(m/(k+1));
    cout << maximumHappiness;
 
    return 0;
}
