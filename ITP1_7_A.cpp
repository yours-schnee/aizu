#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,f,r;
    while(true) {
        cin >> m >> f >> r;
        if(m==-1 && f==-1 && r==-1) break;
        if(m==-1 || f==-1) cout << "F";
        else if(m+f>=80) cout << "A";
        else if(m+f>=65)cout << "B";
        else if(m+f>=50)cout << "C";
        else if(m+f>=30){
            if(r>=50) cout << "C";
            else cout << "D";}
        else cout << "F";
        cout << endl;
    }
}