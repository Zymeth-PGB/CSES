#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    long long count = 1, maxn = -1;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == s[i - 1]){
            count++;
        }else if(s[i] != s[i - 1]){
            if(count > maxn){
                maxn = count;
            }
            count = 1;
        }
    }
    if(count > maxn){
        cout << count;
    }else cout << maxn;
    return 0;
}