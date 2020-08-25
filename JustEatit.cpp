#include <iostream>
 
using namespace std;
 
int main()
{
    long long int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int j = 0; j < n; j++) {
            cin>>a[j];
        }
        long long int cleft=0,cright=0;
        bool t=false;
        for (int k = 0; k < n; k++) {
            cleft-=a[k];
            cright-=a[n-1-k];
            if(cleft>=0 || cright >=0){
                t=true;
                break;
            }
        }
        cout << (!t?"YES":"NO")<<endl;
    }
    return 0;
}
