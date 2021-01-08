#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x[1000]={},y[1000]={};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin>>x[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>y[i];
    }
    double c1=0,c2=0,c3=0,c4=0;
    for (int i = 0; i < n; i++){
        c1+=fabs(x[i]-y[i]);
        c2+=(x[i]-y[i])*(x[i]-y[i]);
        c3+=fabs((x[i]-y[i])*(x[i]-y[i])*(x[i]-y[i]));
        c4=max(c4,fabs(x[i]-y[i]));
    }
    printf("%.7f\n",c1);
    printf("%.7f\n",sqrt(c2));
    printf("%.7f\n",pow(c3,1.0/3.0));
    printf("%.7f\n",c4);
}