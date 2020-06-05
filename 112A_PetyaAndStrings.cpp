#include<bits/stdc++.h>

using namespace std;


int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		//code here!
//	}
	string a,b;
	getline(cin,a);
	getline(cin,b);
  transform(a.begin(), a.end(), a.begin(), ::toupper);
  transform(b.begin(), b.end(), b.begin(), ::toupper);
  for(int i = 0; i < a.length(); ++i){
    if((int)a[i]<(int)b[i]){
      cout << -1;
      return 0;
    }else if((int)a[i]>(int)b[i]){

      cout << 1;
      return 0;
    }
  }
  cout << 0;
	return 0;
}
