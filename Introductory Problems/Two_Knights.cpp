#include <iostream>
 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        long long pos, pos1, pos2, atk = 0;
        pos1 = i*i;
        pos2 = pos1 - 1;
        pos = pos1 * pos2 / 2;
        if(i >= 2){
            atk = 4 * (i - 1) * (i - 2);
        }
        cout << pos - atk << "\n";
    }
    return 0;
}