#include<bits/stdc++.h>

using namespace std;

int main(){
  int studentnum;
  int pos = 0;
  int time;
  cin >> studentnum >> time;
  char studqueue[studentnum];
  cin >> studqueue;
  while(time>0){
      pos = 0;
    while(pos < studentnum-1){
      if(studqueue[pos]=='B'&& studqueue[pos+1]=='G'){
        swap(studqueue[pos],studqueue[pos+1]);
        ++pos;
      }
      ++pos;
      }
      --time;
   }
  for(int i = 0; i <studentnum; ++i){
    cout << studqueue[i];
  }
  return 0;
}
