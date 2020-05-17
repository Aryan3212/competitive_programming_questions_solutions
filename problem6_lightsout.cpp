#include<bits/stdc++.h>

using namespace std;

int main(){
  int output[3][3]={0};
  int i = 0;
  int j = 0;
  int press;
  for(i;i<3;++i){
    j=0;
    for(j;j<3;++j){
      cin >> press;
      if(press&1){
        output[i][j]=!output[i][j];
        if(i==0 && j==0){
          output[i+1][j]=!output[i+1][j];
          output[i][j+1]=!output[i][j+1];
        }else if(i==2 && j==2){
          output[i][j-1]=!output[i][j-1];
          output[i-1][j]=!output[i-1][j];
        }else if(i==0 && j==2){
          output[i][j-1]=!output[i][j-1];
          output[i+1][j]=!output[i+1][j];
        }
        else if(i==2 && j==0){
          output[i][j+1]=!output[i][j+1];
          output[i-1][j]=!output[i-1][j];
        }
        else if(i>0 && i<3 && j==0){
          output[i][j+1]=!output[i][j+1];
          output[i+1][j]=!output[i+1][j];
          output[i-1][j]=!output[i-1][j];
        }else if(i>0 && i<3 && j==2){
          output[i][j-1]=!output[i][j-1];
          output[i+1][j]=!output[i+1][j];
          output[i-1][j]=!output[i-1][j];
        }else if(j>0 && j<3 && i==2){
          output[i][j-1]=!output[i][j-1];
          output[i][j+1]=!output[i][j+1];
          output[i-1][j]=!output[i-1][j];
        }else if(j>0 && j<3 && i==0){
          output[i][j-1]=!output[i][j-1];
          output[i][j+1]=!output[i][j+1];
          output[i+1][j]=!output[i+1][j];
        }else{
          output[i][j-1]=!output[i][j-1];
          output[i][j+1]=!output[i][j+1];
          output[i+1][j]=!output[i+1][j];
          output[i-1][j]=!output[i-1][j];
        }

      }
    }
  }
  for(i =0;i<3;++i){
    for(j=0;j<3;++j){
      cout<<!output[i][j];
    }
    cout<<"\n";
  }


  return 0;
}


