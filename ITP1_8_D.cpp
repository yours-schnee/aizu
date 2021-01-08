#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,p;
    cin >> s;
    cin >> p;
    s = s+s;
    if(s.find(p)!=-1)cout<<"Yes";
    else cout<<"No";
    cout<<endl;
}