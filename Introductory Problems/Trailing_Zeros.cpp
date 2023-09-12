#include <iostream>
 
using namespace std;
 
int main(){
    long long n, res = 0;
    cin >> n;
    for(int i = 5; n / i >= 1; i *= 5){
        res += n / i;
    }
    cout << res;
    return 0;
}