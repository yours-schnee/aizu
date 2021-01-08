#include <bits/stdc++.h>
using namespace std;

struct Dice{
    int v[6];
    void roll(char c){
        int buf;
        if(c=='N'){
            buf=v[0];
            v[0]=v[1];
            v[1]=v[5];
            v[5]=v[4];
            v[4]=buf;
        }
        if(c=='W'){
            buf=v[0];
            v[0]=v[2];
            v[2]=v[5];
            v[5]=v[3];
            v[3]=buf;
        }
        if(c=='S'){
            buf=v[0];
            v[0]=v[4];
            v[4]=v[5];
            v[5]=v[1];
            v[1]=buf;
        }
        if(c=='E'){
            buf=v[0];
            v[0]=v[3];
            v[3]=v[5];
            v[5]=v[2];
            v[2]=buf;
        }
        if(c=='R'){
            buf=v[1];
            v[1]=v[3];
            v[3]=v[4];
            v[4]=v[2];
            v[2]=buf;
        }
    }
    int top(){
        return v[0];
    }
    int right(){
        return v[2];
    }
    int left(){
        return v[3];
    }
    int front(){
        return v[1];
    }
};

bool judge(Dice a, Dice b){
    for(int i = 0; i < 6; i++) if(a.v[i]!=b.v[i]) return false;
    return true;
}

bool check(Dice a,Dice b){
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            if(judge(a,b)) return true;
            a.roll('R');
        }
        if(i%2==0)a.roll('N');
        else a.roll('W');
    }
    return false;
}

int main() {
    Dice d1,d2;
    for(int i = 0; i < 6; i++) cin>>d1.v[i];
    for(int i = 0; i < 6; i++) cin>>d2.v[i];

    if(check(d1,d2)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}