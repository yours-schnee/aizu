#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int A[2];
    int sum;
    cin >> A[0] >> A[1];
    sum = A[0]+A[1];
    while(sum!=0){
        sort(A, A+2);
        cout << A[0] << " " << A[1] << endl;;
        cin >> A[0] >> A[1];
        sum = A[0]+A[1];
    }
}