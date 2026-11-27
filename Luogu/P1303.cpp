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

// 高精乘（大×大） 模版

vi mul(vi& A,vi& B);

inline void solve(){
    string a,b;
    vi A,B,C;
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--) A.pb(a[i] - '0');
    for(int i=b.size()-1;i>=0;i--) B.pb(b[i] - '0');

    C = mul(A,B);

    for(int i=C.size()-1;i>=0;i--) cout<<C[i];
}

// 
vi mul(vi& A,vi& B){
    vi C(A.size()+B.size()); // 防越界，也可以定义全局数组

    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            C[i+j] += A[i] * B[j]; // 两层循环，ai * bj 结果放在 i+j 上
        }  
    }
    for(int i=0;i<A.size()+B.size();i++){
        if(C[i] > 9){
            C[i+1] += C[i] / 10;
            C[i] %= 10;
        }
    }

    while(C.size()>1 && C.back()==0) C.pop_back();
    return C;
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}