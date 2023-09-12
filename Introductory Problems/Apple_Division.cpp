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
 
const int inf = 1e9+7;
const long long INF = 1e18;
 
void solve() {
    vector <ll> a;
    int n;
    ll total = 0, ans = INF;
    cin >> n;
    rep(i, n){
        int temp;
        cin >> temp;
        a.pb(temp);
        total += temp;
    }
    rep(i, (1 << n)){
        ll sum = 0;
        rep(j, n){
            if(i & (1 << j)){
                sum += a[j];
            }
        }
        ll cur = total - sum;
        ans = min(ans, abs(cur - sum));
    }
    cout << ans;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}