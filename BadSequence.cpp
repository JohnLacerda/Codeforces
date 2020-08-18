#include <iostream>
 
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==1){
        cout << "No";
    }else{
        int open=0,close=0;
        for (int i = 0; i < n; ++i) {
            if(s[i]=='(')
                open++;
            else if(s[i]==')'){
                if(close<open)
                    close++;
                else{
                    char aux=s[i];
                    for (int j = i+1; j <n ; ++j) {
                        s[j-1]=s[j];
                    }
                    s[n-1]=aux;
                    break;
                }
            }
        }
        open=0;
        close=0;
        bool yes=true;
        for (int k = 0; k < n; ++k) {
            if(s[k]=='(')
                open++;
            else if(s[k]==')'){
                if(close<open)
                    close++;
                else{
                    yes= false;
                }
            }
        }
        if(open!=close)
            yes=false;
        if(yes)
            cout << "Yes";
        else
            cout << "No";
    }
 
    return 0;
}
