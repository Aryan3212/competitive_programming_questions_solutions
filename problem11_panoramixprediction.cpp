#include<bits/stdc++.h>

using namespace std;


int main(){
  int n,m;
  cin >> n>> m;
  bool isprim = true;
  int i=0;
  for(i = n+1; i<=50;++i){
      isprim = true;
      for(int j = 2; j<=sqrt(i);++j){
        if(i%j==0){
          isprim = false;
          break;
        }
      }
    if(isprim){
      break;
    }
  }
  string yes = "YES";
  string no = "NO";
  (i==m)?cout<< yes<<"\n":cout<< no<<"\n";
  return 0;
}
