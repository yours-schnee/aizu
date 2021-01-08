#include <iostream>
using namespace std;

int main(){
    int W; int H; int x; int y; int r;
    cin >> W >> H >> x >> y >> r;
    if(x-r<0 ||y-r<0){cout << "No" <<endl;}
    else if (x+r>W || y+r>H){cout << "No" << endl;}
    else{cout << "Yes" << endl;}
}