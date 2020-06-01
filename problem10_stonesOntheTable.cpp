#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  string stones;
  cin >> stones;
  char check;
  int counter=0;
  for(int i = 1; i< stones.size(); ++i){
    if(stones[i]==stones[i-1]){
      counter++;
    }
  }
  cout << counter;
  return 0;
}
