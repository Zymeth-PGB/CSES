#include <iostream>
 
using namespace std;
 
long long res(long long n){
    cout << n << " ";
    if(n == 1){
        return 0;
    }
    if(n % 2 == 0){
        n /= 2;
    }else {
        n = n * 3 + 1;
    }
    return res(n);
}
 
int main(){
    long long n;
    cin >> n;
    res(n);
    return 0;
}