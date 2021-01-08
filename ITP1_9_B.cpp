#include <bits/stdc++.h>
using namespace std;

int main() {
    string w;
    int n,m;
    while(true){
        cin>>w;
        if(w=="-")break;
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>m;
            w=w.substr(m)+w.substr(0,m);
        }
        cout<<w<<endl;
    }    
}