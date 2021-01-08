#include <bits/stdc++.h>
using namespace std;

struct Dice{
    int v[6];
    void roll_x(){roll(0,1,5,4);}
    void roll_y(){roll(0,2,5,3);}
    void roll_z(){roll(1,2,4,3);}
    void roll(int i, int j, int k, int l){
        int buf;
        buf=v[i];v[i]=v[j];v[j]=v[k];v[k]=v[l];v[l]=buf;
    }
};

bool judge(Dice d1,Dice d2){
    for(int i = 0; i < 6; i++){if(d1.v[i]!=d2.v[i])return false;}
    return true;
}

bool check(Dice d1, Dice d2){
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            if(judge(d1,d2)) return true;
            d1.roll_z();
        }
        if(i%2==0)d1.roll_x();
        else d1.roll_y();
    }
    return false;
}

Dice d1[100];
bool equal(int n){
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(check(d1[i],d1[j]))return false;
        }
    }
    return true;
}

int main() {
    int n,m;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) cin>>d1[i].v[j];
    }

    if(equal(n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}