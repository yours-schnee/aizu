#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    int mat[101][101]={{}};
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int sum=0;
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
            sum+=mat[i][j];
        }
        mat[i][m] =sum;
    }
    for(int i = 0; i < m+1; i++) {
        int sum=0;
        for(int j = 0; j < n; j++) {
            sum+=mat[j][i];
        }
        mat[n][i] =sum;
    }   
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            cout<<mat[i][j];
            if(j==m)cout<<endl;
            else cout<<" ";
        }
    }
}