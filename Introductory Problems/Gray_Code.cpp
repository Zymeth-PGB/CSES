#include <iostream>
#include <bitset>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < (1 << n); ++i){
        int val = (i ^ (i >> 1));
        bitset <32> b(val);
        string s = b.to_string();
        cout << s.substr(32 - n) << "\n"; 
    }
}