#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    while(n!=0||m!=0) {
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = i+1; j <= n; j++) {
                for(int k = j+1; k <= n; k++) {
                    if(i+j+k==m) cnt++;
                }
            }    
        }
        cout << cnt << endl;
        cin >> n >> m;
    }
}