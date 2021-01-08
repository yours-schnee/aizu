#include <bits/stdc++.h>
using namespace std;

int main() {
    string t,w;
    int cnt=0;
    cin >> t;
    transform(t.begin(),t.end(),t.begin(),::tolower);
    while(true){
        cin>>w;
        if(w=="END_OF_TEXT")break;
        transform(w.begin(),w.end(),w.begin(),::tolower);
        if(t==w)cnt++;
    }
    
    cout << cnt << endl;
}