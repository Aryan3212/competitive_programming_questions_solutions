#include<bits/stdc++.h>

using namespace std;

int main(){
	string word;
	cin >> word;
	int uppercount = 0;
	int lowercount = 0;
	for(int i = 0; i < 100 && word[i]!='\0';++i){
    if(isupper(word[i])){
      ++uppercount;
    }else{
      ++lowercount;
    }
	}
	if(uppercount>lowercount){
	    int i =0;
    while(word[i]!='\0'){
      word[i]=toupper(word[i]);
      ++i;
    }
    cout<< word;
	}
	else{
	  int i =0;
  	while(word[i]!='\0'){
     word[i]=tolower(word[i]);
     ++i;
    }
    cout<< word;
	}
}
