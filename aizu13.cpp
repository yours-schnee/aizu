#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a,b;
    double fa,fb;
    cin >> a >> b;
    fa = a;fb = b;
    printf("%d %d %.5f \n", a/b, a%b, fa/fb);
}