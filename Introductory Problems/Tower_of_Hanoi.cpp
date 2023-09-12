#include <iostream>
 
using namespace std;
 
void towerOfHanoi(int n, int &count, int a, int c, int b, int run){
    if(n == 0){
        return;
    }
    towerOfHanoi(n - 1, count, a, b, c, run);
    count++;
    if(run != 0){
        cout << a << ' ' << c << '\n';
    }
    towerOfHanoi(n - 1, count, b, c, a, run);
}
 
int main(){
    int n, count = 0, run = 0;
    cin >> n;
    towerOfHanoi(n, count, 1, 3, 2, run);
    cout << count << '\n';
    run = 1;
    towerOfHanoi(n, count, 1, 3, 2, run);
    return 0;
}