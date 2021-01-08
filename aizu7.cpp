#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A[3];
    int buf;
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A+3);
    cout << A[0] << " " << A[1] << " " << A[2] << endl;;
}