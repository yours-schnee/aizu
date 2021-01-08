#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while(true) {
        int sum=0;
        getline(cin,str);
        if(str=="0")break;
        for(int i = 0; i < str.length(); i++) {
            sum+=str[i]-'0';
        }
        cout<<sum<<endl;
    }
}