#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t_score=0,h_score=0;
    string t,h;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin>>t>>h;
        if(t>h)t_score+=3;
        else if(t<h)h_score+=3;
        else {t_score++;h_score++;}
    }
    cout<<t_score<<" "<<h_score<<endl;
}