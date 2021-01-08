#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    while(true) {
        cin >> n >> m;
        if(n==0 && m==0) break;
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                if(j==0 || j == n-1){
                    printf("#");
                }
                else if(k!=0 && k!=m-1 ){
                    printf(".");
                }
                else{
                    printf("#");
                }
            }
            printf("\n");
       }
       printf("\n");
    }
}