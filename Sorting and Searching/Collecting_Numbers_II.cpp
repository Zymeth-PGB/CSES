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
    int n, m;
    cin >> n >> m;
    vector <ll> a(n), pos(n);
    rep(i, n) {
        cin >> a[i];
        a[i]--;
        pos[a[i]] = i;
    }
    ll round = 1;
    vector <ll> b;
    b.pb(0);
    rep1(i, n - 1) {
        if(pos[i] < pos[i - 1]) {
            round++;
            b.pb(1);
        }else b.pb(0);
    }  
    rep(i, m) {
        ll x, y;
        cin >> x >> y;
        swap(pos[a[x - 1]], pos[a[y - 1]]);
        swap(a[x - 1], a[y - 1]);   
        if(a[x - 1] > 0 && a[x - 1] < n - 1) {
            if(pos[a[x - 1]] < pos[a[x - 1] - 1]) {
                if(b[a[x - 1]] == 0) {
                    b[a[x - 1]] = 1;
                    round++;
                }
            }else {
                if(b[a[x - 1]] == 1) {
                    b[a[x - 1]] = 0;
                    round--;
                }
            }
            if(pos[a[x - 1] + 1] < pos[a[x - 1]]) {
                if(b[a[x - 1] + 1] == 0) {
                    b[a[x - 1] + 1] = 1;
                    round++;
                }
            }else {
                if(b[a[x - 1] + 1] == 1) {
                    b[a[x - 1] + 1] = 0;
                    round--;
                }
            }
        }
        if(a[x - 1] == 0) {
            if(pos[a[x - 1] + 1] < pos[a[x - 1]]) {
                if(b[a[x - 1] + 1] == 0) {
                    b[a[x - 1] + 1] = 1;
                    round++;
                }
            }else {
                if(b[a[x - 1] + 1] == 1) {
                    b[a[x - 1] + 1] = 0;
                    round--;
                }
            }
        }
        if(a[x - 1] == n - 1) {
            if(pos[a[x - 1]] < pos[a[x - 1] - 1]) {
                if(b[a[x - 1]] == 0) {
                    b[a[x - 1]] = 1;
                    round++;
                }
            }else {
                if(b[a[x - 1]] == 1) {
                    b[a[x - 1]] = 0;
                    round--;
                }
            }
        }
        if(a[y - 1] > 0 && a[y - 1] < n - 1) {
            if(pos[a[y - 1]] < pos[a[y - 1] - 1]) {
                if(b[a[y - 1]] == 0) {
                    b[a[y - 1]] = 1;
                    round++;
                }
            }else {
                if(b[a[y - 1]] == 1) {
                    b[a[y - 1]] = 0;
                    round--;
                }
            }
            if(pos[a[y - 1] + 1] < pos[a[y - 1]]) {
                if(b[a[y - 1] + 1] == 0) {
                    b[a[y - 1] + 1] = 1;
                    round++;
                }
            }else {
                if(b[a[y - 1] + 1] == 1) {
                    b[a[y - 1] + 1] = 0;
                    round--;
                }
            }
        }
        if(a[y - 1] == 0) {
            if(pos[a[y - 1] + 1] < pos[a[y - 1]]) {
                if(b[a[y - 1] + 1] == 0) {
                    b[a[y - 1] + 1] = 1;
                    round++;
                }
            }else {
                if(b[a[y - 1] + 1] == 1) {
                    b[a[y - 1] + 1] = 0;
                    round--;
                }
            }
        }
        if(a[y - 1] == n - 1) {
            if(pos[a[y - 1]] < pos[a[y - 1] - 1]) {
                if(b[a[y - 1]] == 0) {
                    b[a[y - 1]] = 1;
                    round++;
                }
            }else {
                if(b[a[y - 1]] == 1) {
                    b[a[y - 1]] = 0;
                    round--;
                }
            }
        }
        std::cout << round << "\n";
    }
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