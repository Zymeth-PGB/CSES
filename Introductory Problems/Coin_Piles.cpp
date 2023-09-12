#include <iostream>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long c = a + b;
        if(c % 3 == 0){
            if(a > b && b * 2 >= a){
                cout << "YES\n";
            }else if(a < b && a * 2 >= b){
                cout << "YES\n";
            }else if(a == b){
                cout << "YES\n";
            }else cout << "NO\n";
        }else cout << "NO\n";
    }
    return 0;
}