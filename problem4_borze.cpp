#include<bits/stdc++.h>

using namespace std;

int main(){
  char broze[200]={'0'};
  cin >> broze;
  int pos = 0;
  while(pos<200){
      if(broze[pos]=='0'){
        break;
      }
    if(broze[pos]=='.'){
      cout << "0";
    }else if(broze[pos]=='-'&&broze[pos+1]=='.'){
      cout << "1";
      ++pos;
    }else if(broze[pos]=='-'&&broze[pos+1]=='-'){
      cout << "2";
      ++pos;
    }
    ++pos;
  }
  return 0;
}
