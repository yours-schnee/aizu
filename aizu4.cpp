#include <iostream>
using namespace std;

int main(){
    int sec;
    int h; int m; int s;
    cin >> sec;
    h = sec/3600;
    m = sec/60 - h*60;
    s = sec - h*3600 - m*60;
    cout << h << ":" << m << ":" << s <<endl;
}