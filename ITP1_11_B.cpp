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
        if(c=='R'){
            buf=v[1];
            v[1]=v[3];
            v[3]=v[4];
            v[4]=v[2];
            v[2]=buf;
        }
    }
    int result(){
        return v[0];
    }
    int right(){return v[2];}
    int left(){return v[3];}
    int front(){return v[1];}
};

int main() {
    int n;
    Dice dice;
    for(int i = 0; i < 6; i++) cin>>dice.v[i];
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(dice.right()==a)dice.roll('W');
        if(dice.left()==a)dice.roll('E');
        while(dice.result()!=a)dice.roll('N');
        while(dice.front()!=b)dice.roll('R');
        cout<<dice.right()<<endl;
    }
}