#include <iostream>
using namespace std;

int main(){
    int a; int b;
    string term;
    cin >> a >> b;
    if (a>b){term = "a > b";}
    else if (a<b){term = "a < b";}
    else{term = "a == b";}
    
    cout << term <<endl;
}