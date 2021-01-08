#include <bits/stdc++.h>
using namespace std;

int main() {
    int H[300], W[300];
    int n,m;
    int cnt = 0;
    cin >> n >> m;
    H[cnt] = n; W[cnt] = m;
    while(n!=0 && m!=0) {
        /* code */
        cnt++;
        cin >> n >> m;
        H[cnt] = n; W[cnt] = m;
    }
    for(int i = 0; i < cnt; i++) {
        /* code */
        for (int j = 0; j < H[i]; j++)
        {
            for(int k = 0; k < W[i]; k++) {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}