#include<bits/stdc++.h>

using namespace std;

int main(){
	int friendnum;
	int x;
	int sum = 0;
	cin >> friendnum;
	x = friendnum;
	++x;
	for(int i = 1;i<=friendnum;++i){
    int a;
    cin >> a;
    sum+= a;
	}
	int candocounter = 0;
	for(int i =0;i<5;i++){
    if((sum+i)%x==0){}else{candocounter++;}
	}
	cout << candocounter;
	}
