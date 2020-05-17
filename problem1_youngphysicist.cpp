#include<bits/stdc++.h>
using namespace std;int main(){int test;cin >> test;int sumx=0,sumy=0,sumz=0;while(test>0){int x,y,z;cin >> x >> y >> z;sumx+=x;sumy+=y;sumz+=z;--test;}if(sumx==0 && sumy==0 && sumz==0){cout << "YES";}else{cout << "NO";}return 0;}
