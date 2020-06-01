#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    string b;
    cin >>a>>b;
    int size1 = a.size();
    for(int i =0; i < size1; ++i){
        if(a[i]!=b[i]){
          cout<< 1;
        }else{
          cout << 0;
        }
    }
}
