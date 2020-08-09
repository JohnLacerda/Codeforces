#include <iostream>
#include <algorithm>
using namespace std;
 
int mod(int x) {
    if (x < 0)
        return x * -1;
    else
        return x;
}
 
int main() {
    int n,c=0,aux=0;
    cin >> n;
    int a[n];
    for (int i = 0; i <n ; ++i) {
        cin >> a[i];
    }
    sort(a,a+n);
    int maxindice=0,minindice=0;
    while(minindice<n && maxindice<n){
        while(mod (a[maxindice]-a[minindice])<=5 && maxindice<n){
            aux=maxindice-minindice+1;
            if(aux>c)
                c=aux;
            maxindice++;
        }
        minindice++;
        maxindice++;
    }
    cout << c;
    return 0;
}
