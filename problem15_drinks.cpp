#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    double result=0;
    for(int i =1; i <=n;++i){
        int a;
        cin >> a;
        result+=a;
    }
    result = result / n;
    printf("%.20f",result);
    return 0;
}
