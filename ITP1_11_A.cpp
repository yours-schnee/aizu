#include <bits/stdc++.h>
using namespace std;

struct Dice{
    int v[6];
    void roll(char c){
        int buf;
        if(c=='S'){
            buf=v[1];
            v[1]=v[0];
            v[0]=v[4];
            v[4]=v[5];
            v[5]=buf;
        }
        if(c=='W'){
            buf=v[3];
            v[3]=v[0];
            v[0]=v[2];
            v[2]=v[5];
            v[5]=buf;
        }
        if(c=='N'){
            buf=v[4];
            v[4]=v[0];
            v[0]=v[1];
            v[1]=v[5];
            v[5]=buf;
        }
        if(c=='E'){
            buf=v[2];
            v[2]=v[0];
            v[0]=v[3];
            v[3]=v[5];
            v[5]=buf;
        }
    }
    int result(){
        return v[0];
    }
};

int main() {
    string w;
    Dice dice;
    for(int i = 0; i < 6; i++) {
        cin >> dice.v[i];
    }
    cin>>w;
    for(int i = 0; i < w.size(); i++) dice.roll(w[i]);
    cout<<dice.result()<<endl;
}