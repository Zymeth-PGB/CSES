#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
    string s, left = "", right = "", mid = "";
    cin >> s;
    int a[30], oddNumber = 0;
    for(int i = 0; i < 26; ++i)
        a[i] = 0;
    for(int i = 0; i < s.length(); ++i)
        a[(int)s[i] - 65]++;
    for(int i = 0; i < 26; ++i){
        if(a[i] % 2 != 0){
            oddNumber++;
            mid = char(i + 65);
        }
    }
    if(oddNumber > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }
    for(int i = 0; i < 26; ++i){
        if(a[i] % 2 == 0){
            for(int j = 0; j < a[i] / 2; ++j){
                left += char(i + 65);
            }
        }else {
            if(a[i] > 1){
                for(int j = 0; j < (a[i] - 1) / 2; ++j){
                    left += char(i + 65);
                }   
            }
        }
    }
    right = left;
    reverse(right.begin(), right.end());
    cout << left << mid << right << "\n";
    return 0;
}