/*
******************
****Created by PGB
******************
*/
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <bitset>
#include <iomanip>
#include <set>
#include <queue>
#include <sstream>
#include <map>
#include <stack>
#include <stdio.h>
#include <time.h>
 
#define fi first
#define se second
#define pb push_back
#define rep(i, n) for(int i = 0; i < n; ++i)
#define per(i, n) for(int i = n - 1; i >= 0; --i)
#define rep1(i, n) for(int i = 1; i <= n; ++i)
#define per1(i, n) for(int i = n; i > 0; --i)
#define rep_ab(i, a, b) for(int i = a; i <= b; ++i)
#define per_ab(i, a, b) for(int i = b; i >= a; --i)
#define all(x) x.begin(), x.end()
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
const int inf = 1e9+7;
const long long INF = 1e18;
 
void call(vector <ll> &v){
    rep1(i, 17){
        v[i] = 9 * i * pow(10, i - 1);
    }
 
    return;
}
 
void solve() {
    ll k;
    vector <ll> v(18, 0);
    ll sum = 0, length_of_number;
 
    cin >> k;
 
    call(v);
 
    rep(i, v.size()){
        sum += v[i];
        if(sum > k){
            break;
        }else {
            length_of_number = i + 1;
        }
    }
 
    sum -= v[length_of_number];
    
    ll diff = k - sum;
    ll starting_number = pow(10, length_of_number - 1);
    ll distance = (diff / length_of_number);
    ll actual_number = starting_number + distance - 1;
    ll remainder = (diff % length_of_number);
 
    if(remainder == 0){
        cout << actual_number % 10 << "\n";
    }else {
        actual_number++;
        vector <ll> v1;
        while(actual_number != 0){
            v1.pb(actual_number % 10);
            actual_number /= 10;
        }
        per(i, v1.size()){
            remainder--;
            if(remainder == 0){
                cout << v1[i] << "\n";
            }
        }
    }
 
    return;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}