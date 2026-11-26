#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define int ll
#define vi vector<int>
#define vii vector< vector<int> >
#define pb push_back
// const int N = ;
// const int mod = ;
// const int INF = 0x3f3f3f3f;

/* 无输出，问题
    1. 数组未初始化
    2. int VS char

    二周目：没换行 *变0
*/

inline void solve(){
    int n,m;
    cin>>n>>m;
    char a[110][110],ans[110][110]; // 字符数组
    int dx[8]={-1,0,1,-1,1,-1,0,1},dy[8]={-1,-1,-1,0,0,1,1,1}; // 8个方向坐标
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int cnt=0; // 每个格
            for(int k=0;k<8;k++){
                if(a[i][j]=='?' && a[ i+dx[k] ][ j+dy[k] ] == '*') cnt++;
            }
            // 改
            if(a[i][j]=='*') ans[i][j]='*';
            else ans[i][j]='0'+cnt; // [x] char=int
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}