/*
****************
****Created by PGB
****************
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
#include <list>
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

void init_code() {
    fast_io;
    /*#ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif*/
}

void solve() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cost = 0;
    ll x = a[n/2];
    rep(i, n) {
        cost += abs(a[i] - x);
    }
    cout << cost;
}

int main() {
    init_code();

    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}