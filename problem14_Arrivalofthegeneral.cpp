#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i =0; i<n;++i){
    cin >> arr[i];
  }
  int maxpos = 0;
  int minpos = 0;
  for(int i = 0;i<n;i++){
    if(arr[maxpos]<arr[i]){
      maxpos = i;
    }
    if(arr[minpos]>=arr[i]){
      minpos = i;
    }
  }
  //cout << minpos <<"=minpos= "<< arr[minpos]<<" bkj" << maxpos << "=maxpos=" << arr[maxpos];
  if(minpos<maxpos)cout<<(n-minpos)+(maxpos)-2;
  else cout<<(n-minpos)+(maxpos)-1;
}

