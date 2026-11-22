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

inline void solve(){
    /*
    子集： len-i
    1 2 3 4 5
    0 1 2 3 4

    1 2 3 4 5 6 7 8 9 10
    28160

    1+len-1

    [x] 子集是随便选，不是挨着，是组合数学
    C(len,1) +...+ C(len,len)

    思路确实是看被加多少次：
    子集个数：2^n
    先想暴力：*子集枚举*
    再转换思路：每个元素**被多少个子集包含** 是我之前思路
    问题是怎么找？
    先定该元素，则剩下的选择为 2^(n-1)  ---乘法原理，结合子集总个数
    */
    vi a;
    int x;
    while(cin>>x){ // 读到EOF  ctrl+D
        a.pb(x);
    }
    int len = a.size();
    int ans=0;
    for(int i=0;i<len;i++){
        ans+=a[i]*pow(2,len-1);
    }
    cout<<ans;
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}