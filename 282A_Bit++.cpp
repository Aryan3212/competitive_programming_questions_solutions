#include<bits/stdc++.h>

using namespace std;

int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		//code here!
//	}
  int n;
  cin >> n;
  cin.ignore();
	string ops;
	int x=0;
	while(n--){
	  getline(cin ,ops);
	  size_t finds = ops.find("++");
    if(finds != string::npos){
      x++;
    }else{
      x--;
    }
	}
  cout << x;

	return 0;
}
