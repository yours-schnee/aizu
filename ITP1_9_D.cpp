#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,l;
    string s1,s2,s3;
    cin>>s1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin>>s2>>m>>l;
        if(s2=="replace"){
            cin>>s3;
            for(int j = 0; j < s3.size(); j++) {
                s1[m+j]=s3[j];
            }
        }
        else if(s2=="reverse"){
            string buf;
            buf = s1.substr(m,l-m+1);
            reverse(buf.begin(),buf.end());
            for(int j = 0; j < buf.size(); j++) {
                s1[m+j]=buf[j];
            }
        }
        else if(s2=="print"){cout<<s1.substr(m,l-m+1)<<endl;}
    }
}