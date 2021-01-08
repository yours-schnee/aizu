#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int cnt[26]={};
    while(getline(cin,str)){
        for(int i = 0; i < str.length(); i++) {
            if(char(tolower(str[i]))>='a'&&char(tolower(str[i]))<='z'){
                cnt[char(tolower(str[i]))-'a']++;
            }
        }
    }
    for(int i = 0; i < 26; i++) {
        cout<<char('a'+i)<<" : "<<cnt[i]<<endl;
    }
}