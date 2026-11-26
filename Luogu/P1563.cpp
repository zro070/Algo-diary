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

/*
    0 左0：-1
      右1: 1
    1 左0：1
      右1: -1
*/

inline void solve(){
    int n,m;
    cin>>n>>m;
    vi a(n);
    vector<string> ans(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>ans[i];
    }
    int idx=0;
    for(int i=0;i<m;i++){
        int d,c,ds=0;
        cin>>d>>c;
        if(!a[idx]){ // 0
            if(!d) ds=-1;
            else ds=1;
        }
        else{ // 1
            if(!d) ds=1;
            else ds=-1;
        }
        idx=((idx+ds*c)%n + n ) % n;
        // for(int j=0;j<c;j++){
        //     idx=((idx+ds)%n + n ) % n; // 0-base 环状数组取余 防负数：+n)%n
        // }
    }
    cout<<ans[idx];
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}