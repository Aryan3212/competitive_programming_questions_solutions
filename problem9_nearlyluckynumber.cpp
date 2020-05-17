#include<bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long int temp;
  unsigned long long int atmp;
  int luckycnt=0;
  cin >> atmp;
  while(atmp>0){
    temp = atmp%10;
    if(temp==7){
      luckycnt++;
    }else if(temp==4){
      luckycnt++;
    }
    atmp/=10;
    }
  if(luckycnt==7){
    cout << "YES\n";
  }else if(luckycnt==4){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }
}
