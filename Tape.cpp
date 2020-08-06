#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int binarySearch(vector<int> &arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}
 
 
int main() {
    int n,m,k;
    cin >> n;
    cin >> m;
    cin >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int t=0;
    t+=n;
    vector<int> aux(n-1);
    for (int i = 0; i < n-1 ; i++) {
        aux[i] = b[i+1] - b[i];
    }
    sort (aux.begin (),aux.end ());
    for (; n>k ; n--) {
        t+=aux[0]-1;
        aux.erase (aux.begin ());
    }
    cout << t;
 
    return 0;
}
