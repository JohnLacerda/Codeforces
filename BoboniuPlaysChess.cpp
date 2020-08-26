#include <iostream>
 
using namespace std;
 
int mod(int x){
    return (x>=0)?x:-x;
}
 
int main() {
    int n,m,sx,sy;
    cin >> n >> m >> sx >> sy;
    cout << sx << " " << sy << endl;
    int sxaux=sx,syaux=sy;
    while(sx>1){
        sx--;
        cout << sx << " " << sy << endl;
    }
    sx=sxaux;
    while(sx<n){
        sx++;
        cout << sx << " " << sy << endl;
    }
    if (sx>1){
        while(sy>1){
            sy--;
            if(sy!=syaux){
                cout << sx << " " << sy << endl;
            }
        }
        sy=syaux;
        while(sy<m){
            sy++;
            if(sy!=syaux){
                cout << sx << " " << sy << endl;
            }
        }
    }
    int last=0;
    while(sx>1){
        sx--;
        cout << sx << " " << sy << endl;
        if(last==0){
            while(sy>1){
                sy--;
                if(sy!=syaux){
                    cout << sx << " " << sy << endl;
                }
            }
            last=1;
        }else if(last==1){
            while(sy<m){
                sy++;
                if(sy!=syaux){
                    cout << sx << " " << sy << endl;
                }
            }
            last=0;
        }
    }
    return 0;
}
