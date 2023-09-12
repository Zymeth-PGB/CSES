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
const int DIR_LEN = 4;
const int PATH_LEN = 48;
 
int dr[DIR_LEN] = {-1, 0, 1, 0};
int dc[DIR_LEN] = {0, 1, 0, -1};
int p[PATH_LEN];
bool check_visit[9][9]; 
 
int tryPath(int pathIdx, int curR, int curC){
    if((check_visit[curR][curC - 1] && check_visit[curR][curC + 1]) 
        && ((!check_visit[curR - 1][curC] && !check_visit[curR + 1][curC]))){
        return 0;
    }
    if((check_visit[curR - 1][curC] && check_visit[curR + 1][curC]) 
        && ((!check_visit[curR][curC - 1] && !check_visit[curR][curC + 1]))){
        return 0;
    }
 
    if(curR == 7 && curC == 1){
        if(pathIdx == PATH_LEN){
            return 1;
        }
        return 0;
    }
 
    if(pathIdx == PATH_LEN){
        return 0;
    }
 
    int res = 0;
    check_visit[curR][curC] = true;
 
    if(p[pathIdx] < 4){
        int nxtR = curR + dr[p[pathIdx]];
        int nxtC = curC + dc[p[pathIdx]];
        if(!check_visit[nxtR][nxtC]){
            res += tryPath(pathIdx + 1, nxtR, nxtC);
        }
    }else {
        rep(i, DIR_LEN){
            int nxtR = curR + dr[i];
            int nxtC = curC + dc[i];
            if(check_visit[nxtR][nxtC]){
                continue;
            }
            res += tryPath(pathIdx + 1, nxtR, nxtC);
        }
    }
 
    check_visit[curR][curC] = false;
    return res;
}
 
void solve() {
    string s;
    cin >> s;
 
    rep(i, PATH_LEN){
        if(s[i] == 'U'){
            p[i] = 0;
        }else
        if(s[i] == 'R'){
            p[i] = 1;
        }else
        if(s[i] == 'D'){
            p[i] = 2;
        }else 
        if(s[i] == 'L'){
            p[i] = 3;
        }else {
            p[i] = 4;
        }
    }
 
    rep(i, 9){
        check_visit[0][i] = true;
        check_visit[i][0] = true;
        check_visit[8][i] = true;
        check_visit[i][8] = true;
    }
 
    rep1(i, 7){
        rep1(j, 7){
            check_visit[i][j] = false;
        }
    }
 
    int startIdx = 0;
    int startC = 1;
    int startR = 1;
    int ans = tryPath(startIdx, startR, startC);
 
    cout << ans << "\n";
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