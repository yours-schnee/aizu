#include <bits/stdc++.h>
using namespace std;

int call(string, std::vector<int>);

int main() {
    int n,m;
    string s;
    vector <int> spade,heart,clover,diamond;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s >> m;
        if(s=="S"){spade.push_back(m);}
        else if(s=="H"){heart.push_back(m);}
        else if(s=="C"){clover.push_back(m);}
        else if(s=="D"){diamond.push_back(m);}
    }

    sort(spade.begin(), spade.end());
    sort(heart.begin(), heart.end());
    sort(clover.begin(), clover.end());
    sort(diamond.begin(), diamond.end());

    call("S", spade);
    call("H", heart);
    call("C", clover);
    call("D", diamond);
}

int call(string word, vector<int>num){
    int size = num.size();
    
    for(int i = 1; i <= 13; i++) {
        vector<int>::iterator f = find(num.begin(), num.end(), i);
        size_t index = distance(num.begin(), f);
        if (index == size) cout << word << " " << i << endl;
    }
}