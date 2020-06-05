#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,k;
  cin >> n >>k;
  int arr[n];
  for(int i =0; i< n; ++i){
    cin >> arr[i];
  }
  int kplace = 1;
  int knum = arr[0];
  sort(arr,arr+n,greater<int>());
  for(int i = 1; i< n; ++i){
    if(arr[i]!=arr[i-1] || (arr[i]==arr[i-1])){
      kplace ++;
    }
    if(kplace==k){
      knum = arr[kplace-1];
    }
  }
  int i;
  for(i = 0; i< n ; ++i){
      if(arr[i]<knum || arr[i]==0){
        break;
      }
  }
  cout << i;
  return 0;
}
