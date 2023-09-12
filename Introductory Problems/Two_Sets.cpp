#include <iostream>
 
using namespace std;
 
const long long MAXN = 1000006;
 
int main(){
    long long n, sum = 0;
    cin >> n;
    bool check[MAXN];
    for(int i = 1; i <= n; ++i){
        check[i] = false;
        sum += i;
    }
    if(sum % 2 != 0){
        cout << "NO\n";
        return 0;
    }else {
        cout << "YES\n";
        sum /= 2;
        long long sum1 = 0, count = 0;
        for(int i = n; i >= n/2; --i){
            if(sum1 + i > sum){
                break;
            }else {
                sum1 += i;
                check[i] = true;
                count++;
            }
        }
        if(sum > sum1){
            check[sum - sum1] = true;
            count++;
        }
        cout << count << "\n";
        for(int i = 1; i <= n; ++i){
            if(check[i] == true){
                cout << i << " ";
            }
        }
        cout << "\n";
        cout << n - count << "\n";
        for(int i = 1; i <= n; ++i){
            if(check[i] == false){
                cout << i << " ";
            }
        }
    }
    return 0;
}