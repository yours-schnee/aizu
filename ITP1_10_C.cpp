#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    int num[1000]={};
    while(true){
        cin >> n;
        if(n==0)break;
        double mean=0;
        for(int i = 0; i < n; i++) {
            cin>>num[i];
            mean += num[i];
        }
        mean /=n;
        double std=0;
        for(int i=0; i<n;i++){
            std+=(num[i]-mean)*(num[i]-mean);
        }
        printf("%.5f\n",sqrt(std/n));
    }
}