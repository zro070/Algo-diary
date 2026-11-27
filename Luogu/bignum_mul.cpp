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
大 × 小
用A的每一位乘b 是一种简单的方法
注意，因为结果不再是十进制表示法，所以进位用 除以10的商 和 余数
*/
vi mul(vi& A, int b);

inline void solve(){
    string a;
    int b;
    vi A,C;
    cin>>a>>b;
    for(int i=a.size() - 1;i>=0;i--) A.pb(a[i] - '0'); // 字符转整数

    C = mul(A,b);

    for(int i=C.size()-1;i>=0;i--) cout<<C[i];
}

vi mul(vi& A, int b){
    vi C;
    int t=0;
    for(int i=0;i<A.size() || t;i++){ // 进位处理，区别于加减（最多进1）
        if(i<A.size()) t += A[i]*b;

        C.pb(t%10);

        t/=10;
    }
    return C;
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}