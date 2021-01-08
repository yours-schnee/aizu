#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
    int a,b;
    char op;
    cin >> a >> op >> b;
    while(op!='?'){
        if(op == '+'){cout << a+b << endl;}
        if(op == '-'){cout << a-b << endl;}
        if(op == '*'){cout << a*b << endl;}
        if(op == '/'){cout << a/b << endl;}
        cin >> a >> op >> b;
    }

    return 0;

}