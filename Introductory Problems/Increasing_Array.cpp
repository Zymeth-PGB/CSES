#include <iostream>
 
using namespace std;
 
const long long MAXN = 2*100000 + 5;
 
int main(){
    long long n;
    cin >> n;
    long long a[MAXN], res = 0;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 1; i < n; ++i){
        if(a[i] < a[i - 1]){
            res += (a[i - 1] - a[i]);
            a[i] += (a[i - 1] - a[i]);
        }
    }
    cout << res;
    return 0;
}