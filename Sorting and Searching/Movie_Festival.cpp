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
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
const int inf = 1e9+7;
const long long INF = 1e18;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif 
}
 
void solve() {
    int n;
    cin >> n;
    vector <pair <int, int> > v;
    int cur = 0, total = 0; 
    rep(i, n) {
    	int x, y;
    	cin >> x >> y;
    	v.pb(make_pair(y, x));
    }
    sort(all(v));
    rep(i, n) {
    	if(v[i].se >= cur) {
    		cur = v[i].fi;
    		total++;
    	}
    }
    cout << total;
}
 
int main(){
    init_code();
 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}