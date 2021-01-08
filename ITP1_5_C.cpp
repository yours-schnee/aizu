#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    while(true) {
        cin >> n >> m;
        if(n==0 && m==0) break;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i%2==0){
                    if(j%2==0) printf("#");
                    else printf(".");
                }
                else{
                    if(j%2==0) printf(".");
                    else printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}