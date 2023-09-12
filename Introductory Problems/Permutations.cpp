#include <iostream>
 
using namespace std;
 
const long long MAXN = 1000002;
 
int main(){
    long long n;
    cin >> n;
    if(n == 3 || n == 2){
        cout << "NO SOLUTION";
        return 0;
    }
    if(n == 4){
        for(int i = 2; i <= n; i += 2){
            cout << i << " ";
        }
        for(int i = 1; i <= n; i += 2){
            cout << i << " ";
        }
        return 0;
    }
    for(int i = n; i >= 1; i -= 2){
        cout << i << " ";
    }
    for(int i = n - 1; i >= 1; i -= 2){
        cout << i << " ";
    }
    return 0;
}