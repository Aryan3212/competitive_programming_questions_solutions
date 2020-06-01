#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 1; i<=n && !(n&1);i++){
    if(i&1){
      cout << i+1 <<" ";
    }else{
      cout << i-1<<" ";
    }

  }
  if(n&1) cout << -1;
  return 0;
}
