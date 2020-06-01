#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int choco;
  int tail=1;
  int lastval;
  cin >> n>> choco;
  int remaining[n+1];
  deque<int> childq;
  for(int i = 1;i<n+1;++i){
    childq.push_back(i) ;
  }
  for(int i = 1;i<n+1;++i){
    cin >> remaining[i];
  }
  while(!childq.empty()){
    remaining[childq.front()]-=choco;
    if(remaining[childq.front()]>0){
      childq.push_back(childq.front());
      childq.pop_front();  w
    }else{
      lastval=childq.front();
      childq.pop_front();
    }
  }
  cout << lastval <<"\n";
  return 0;
}
