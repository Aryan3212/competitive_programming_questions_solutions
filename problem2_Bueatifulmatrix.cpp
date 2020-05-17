#include<bits/stdc++.h>

using namespace std;

int main(){
  int i = 0;
  int j = 0;
  int i1 = 0,j1 = 0;
  int oneFound = 0;
  while(true){
    cin >> oneFound;
    if(oneFound == 1){
      i1 = i;
      j1 = j;
    }
    ++j;
    if(j == 5){
      j = 0;
      ++i;
    }
    if(i == 5){
      break;
    }
  }
  int result = 0;
  if(i1>2){
    result = i1-2;
  }else{
    result = 2-i1;
  }
  if(j1>2){
    result += j1-2;
  }else{
    result += 2-j1;
  }
  cout << result <<"\n";
  return 0;
}
