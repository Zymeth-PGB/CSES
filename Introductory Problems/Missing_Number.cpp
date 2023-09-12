#include <iostream>
 
using namespace std;
 
const long long MAXN = 2*100000 + 5;
 
int main(){
    long long n;
    cin >> n;
    long long check[MAXN];
    for(int i = 1; i <= n; ++i)
        check[i] = false;
    for(int i = 0; i < n - 1; ++i){
        int temp;
        cin >> temp;
        check[temp] = true;
    }
    for(int i = 1; i <= n; ++i){
        if(check[i] == false){
            cout << i;
            break;
        }
    }
    return 0;
}