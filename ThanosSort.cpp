#include <iostream>
 
using namespace std;
 
int asAllThingsShouldBe(int whatDidItCost[], int everything){
    bool snap= false;
    int theEndisNear=everything;
    while(!snap){
        int gems=1;
        for (int i = 0; i < everything; i+=theEndisNear) {
            snap=true;
            for (int j = i; j <theEndisNear*gems ; ++j) {
                snap = (j==i)? true : (whatDidItCost[j]>=whatDidItCost[j-1])? true : false;
                if(!snap){
                    break;
                }
            }
            if(snap){
                return theEndisNear;
            }
            gems++;
        }
        theEndisNear/=2;
    }
 
}
 
int main() {
    int n;
    cin >> n;
    int perfectlyBalanced=n;
    int thanosArray[n];
    for (int i = 0; i < n; ++i) {
        cin >> thanosArray[i];
    }
    perfectlyBalanced=asAllThingsShouldBe (thanosArray,perfectlyBalanced);
    cout << perfectlyBalanced;
 
    return 0;
}
