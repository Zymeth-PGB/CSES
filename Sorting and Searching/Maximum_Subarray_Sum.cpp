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
 
void solve() {
    ll n;
    cin >> n;
    ll a[n + 1], prefixSum = 0, res = -inf, min_prefixSum = 0, sum = 0;
    bool check_pos = false, check_neg = false;
    rep(i, n){
        cin >> a[i];
        sum += a[i];
        if(a[i] < 0){
            check_neg = true;
        }
        if(a[i] > 0){
            check_pos = true;
        }
        prefixSum += a[i];
        res = max(res, prefixSum - min_prefixSum);
        min_prefixSum = min(prefixSum, min_prefixSum);
    }
    if(!check_pos){
        sort(a, a + n);
        cout << a[n - 1];
        return;
    }
    if(!check_neg){
        cout << sum;
        return;
    }
    cout << res;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}