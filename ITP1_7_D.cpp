#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,l;
    int a[100][100]={{}};
    int b[100][100];
    cin >> n >> m >> l;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < l; j++) {
            cin>>b[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < l; j++) {
            long long mat=0;
            for(int k = 0; k < m; k++) {
                mat+=a[i][k]*b[k][j];
            }
            cout<<mat;
            if(j==l-1);
            else cout<<" ";
        }
        cout<<endl;
    }
}