#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    double pi = M_PI;
    cin >> a >> b >>c;
    c=2*pi*c/360;
    printf("%.5f\n",0.5*a*b*sin(c));
    printf("%.5f\n",a+b+sqrt(a*a+b*b-2*a*b*cos(c)));
    printf("%.5f\n",b*sin(c));
}