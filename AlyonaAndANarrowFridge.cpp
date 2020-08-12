#include <iostream>
#include <vector>;
#include <algorithm>
 
using namespace std;
 
int main() {
    int n,h,k=0;
    cin >> n;
    cin >> h;
    vector<int> a;
    int x=0;
    for (int i = 0; i <n ; ++i) {
        cin >> x;
        a.push_back (x);
    }
    vector<int> b;
    x=0;
    while(x<=h && !a.empty ()){
        x=0;
        b.push_back (a[0]);
        a.erase (a.begin ());
        sort (b.begin (),b.end ());
        for (int i = b.size ()-1; i >=0 ; i-=2) {
            x+=b[i];
        }
        if(x<=h){
            k++;
        } else
            break;
    }
    cout << k;
 
    return 0;
}
