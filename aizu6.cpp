#include <iostream>
using namespace std;

int main(){
    int a; int b; int c;
    string term;
    cin >> a >> b >> c;
    if( (a < c) && (a < b) ){
            term = "Yes";
    }
    else{
        term = "No";
    }
    cout << term <<endl;
}