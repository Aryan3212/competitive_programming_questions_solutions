#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int sum = 0;
	int count1=0;
	while(t--){
    sum = 0;
		int a;
		cin >>a;
		sum+=a;
		cin >>a;
		sum+=a;
		cin >>a;
		sum+=a;
		if(sum >= 2){
        count1++;
		}
	}
	cout << count1;
	return 0;
}
