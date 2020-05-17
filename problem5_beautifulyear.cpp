#include<bits/stdc++.h>

using namespace std;

bool sameDigitchecker(int year);

int main(){
  int year;
  int i;
  cin >> year;
  for(i = year+1;true;++i)
  {
    if(sameDigitchecker(i))
    {
      break;
    }
  }
  cout << i;
  return 0;
}

bool sameDigitchecker(int year){
  int num[10]={0};
  int digit;
  while(year>0){
    digit = year%10;
    num[digit]++;
    if(num[digit]>1){
      return false;
    }
    year/=10;
  }
  return true;
}

