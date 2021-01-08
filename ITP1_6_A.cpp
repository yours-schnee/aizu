#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    reverse(a,a+n);
    for(int i = 0; i<n; i++){
        if(i==n-1){ cout << a[i] << endl;}
        else{cout << a[i] << " ";}
    }
}