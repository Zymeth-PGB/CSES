#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
string createString(string s){
    int j = 0, h = 0;
    string res = "", temp = "";
    for(int i = s.length() - 1 ; i >= 0; --i){
        if(s[i - 1] < s[i]){
            j = i - 1;
            break;
        }
    }
    for(int i = s.length() - 1 ; i >= 0; --i){
        if(s[i] > s[j]){
            h = i;
            break;
        }
    }
    swap(s[j], s[h]);
    for(int i = 0; i < s.length(); ++i){
        if(i <= j){
            res += s[i];
        }else {
            temp += s[i];
        }
    }
    reverse(temp.begin(), temp.end());
    res += temp;
    return res;
}
 
int main(){
    vector <string> v;
    string s, s1 = "", s2 = "";
    cin >> s;
    sort(s.begin(), s.end());
    s2 = s;
    reverse(s2.begin(), s2.end());
    v.push_back(s);
    s1 = s;
    while(true){
        if(s2.compare(s) == 0){
            break;
        }
        s1 = createString(s1);
        if(s1.compare(s2) == 0){
            v.push_back(s1);
            break; 
        }else {
            v.push_back(s1);
        }
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << "\n";
    }
    return 0;
}