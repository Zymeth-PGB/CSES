#include <iostream>
 
using namespace std;
 
const long long MOD = 1e9 + 7;
 
int main(){
    long long n, res = 1;
    cin >> n;
    for(int i = 0; i < n; ++i){
        res = res * 2 % MOD;
    }
    cout << res;
    return 0;
}