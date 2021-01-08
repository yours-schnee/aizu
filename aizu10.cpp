#include <iostream>
using namespace std;

int main(){
    int num;
    int i = 1;
    cin >> num;
    while((num != 0) && (i<=10000)){
        cout << "Case "<< i << ": " << num << endl;
        cin >> num;
        i++;
    }
}