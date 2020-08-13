#include <iostream>
 
using namespace std;
 
int main() {
    int h, w;
    cin >> h;
    cin >> w;
    string picture[h];
    for (int i = 0; i < h; ++i) {
        cin >> picture[i];
    }
    bool found = false;
    bool cross=false;
    int northy, northx,southx,southy,ysize=0,xsize=0,westrial,westx,westy,eastx,easty,centerx,centery;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (picture[i][j] == '*') {
                northx = j;
                northy = i;
                southx=northx;
                southy=northy;
                found = true;
                ysize++;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found){
        cout << "NO";
    }else{
        cross= true;
        for (int i = northy+1; i < h; ++i) {
            if(picture[i][northx]=='*'){
                ysize++;
                southy++;
            }else{
                break;
            }
        }
        if(ysize<3 || northx==0 || northx==w){
            cout << "NO";
        }else{
            found=false;
            for (int i = northy+1; i < southy; ++i) {
                if(picture[i][northx-1]=='*'){
                    centery=i;
                    centerx=northx;
                    westy=centery;
                    easty=centery;
                    westx=centerx;
                    eastx=centerx;
                    found=true;
                    xsize++;
                    break;
                }
            }
            if(!found){
                cout << "NO";
            }else{
                for (int i = centerx-1; i >=0 ; i--) {
                    if(picture[centery][i]=='*'){
                        xsize++;
                        westx--;
                    }else{
                        break;
                    }
                }
                if(picture[centery][centerx+1]=='.'){
                    cout << "NO";
                }else{
                    for (int i = centerx+1; i <w ; ++i) {
                        if(picture[centery][i]=='*'){
                            xsize++;
                            eastx++;
                        }else{
                            break;
                        }
                    }
                    cross= true;
                    for (int j = 0; j < h; ++j) {
                        for (int i = 0; i < w; ++i) {
                            if(j<centery && i!=centerx && picture[j][i]=='*'){
                                cross=false;
                                break;
                            }
                            if(j<northy && picture[j][i]=='*'){
                                cross=false;
                                break;
                            }
                            if (j==centery && (i<westx || i>eastx) && picture[j][i]=='*'){
                                cross=false;
                                break;
                            }
                            if(j>centery && i!=centerx && picture[j][i]=='*'){
                                cross=false;
                                break;
                            }
                            if(j>southy && picture[j][i]=='*'){
                                cross=false;
                                break;
                            }
                        }
                        if(!cross){
                            cout << "NO";
                            break;
                        }
                    }
                    if(cross){
                        cout << "YES";
                    }
                }
            }
        }
    }
 
 
    return 0;
}
