#include<iostream>
#include<unordered_map>
using namespace std;
int romantoint(string s) {
    unordered_map<char,int> values{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
    int res =0;
    for(int i=0;i<s.length();i++){
        if(values[s[i]]<values[s[i+1]])
            res-=values[s[i]];
        else
            res+=values[s[i]];
    }
    return res;
    
}
int main(){
    string s;
    cin>>s;
    cout<<romantoint(s);
    return 0;
}

