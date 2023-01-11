#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<map>
#include<string>
using namespace std;
 int keypresses(char c){
 	string keymapping[]={"",".,?1:","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	 for(auto key:keymapping){
	 	int npress=0;
	 	for(auto w:key){
	 		if(w==c)
	 		return npress;
	 		//+npress;
		 }
	 }
}
int countkeypresses(string s){
	int count =0;
	for(auto c:s){
	count+=keypresses(toupper(c));
}
return count;
}
int countkeypresses2(string s){
	int keypress[128]={0};
	keypress['A']=1;
	keypress['B']=2;
	keypress['C']=3;
	keypress['D']=1;
	keypress['E']=1;
	keypress['F']=2;
	keypress['G']=3;
	keypress['H']=1;
	keypress['I']=2;
	keypress['J']=3;//initialize for all the charecters
	int count =0;
	for(auto c:s){
	count+=keypress[c];
}
return count;
}
 int keypresses3(char c){
 	unordered_map<char,int> keypress {{'A',1},{'B',2},{'C',3}};
	 	int count=0;
	 	for(auto w:key){
	 		if(w==c)
	 		return npress;
	 		//+npress;
		 }
	 }
int main(){
	string s;
	getline(cin,s);
	cout<<countkeypressses;
	return 0;
}
