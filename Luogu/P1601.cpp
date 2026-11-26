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
    代码可分为三个部分：1. 输入 2. 计算（模拟过程） 3. 输出
    其中1和3都涉及到逆序存储

    具体模拟过程是从低位开始，所以从下标0开始，只有存储和输出需要逆序

    我们这里用一下我寒假学的acwing的模版
*/

vi add(vi& A,vi& B); // 引用传参：直接作用于实参（不产生副本）

// 引用：别名，指向同一个地址
// 因为我这里已经有一个函数了，所以魔改一下模版，弄成声明，看得更清晰一点

inline void solve(){
    string a,b;
    vi A,B,C;
    cin>>a>>b;
    for(int i=a.size() - 1;i>=0;i--) A.pb(a[i] - '0'); // 注意字符和数字的转换
    for(int i=b.size() - 1;i>=0;i--) B.pb(b[i] - '0');

    C = add(A,B);

    for(int i=C.size()-1;i>=0;i--) cout<<C[i];
}

vi add(vi& A,vi& B){ // 高精度加
    vi C;
    int t=0; // 进位
    for(int i=0;i<A.size() || i<B.size();i++){ // 加完为止
        if(i<A.size()) t+=A[i]; // 还有就加
        if(i<B.size()) t+=B[i];
        C.pb(t%10);
        t/=10; // 进位处理
    }
    if(t) C.pb(1); // 进位处理
    return C;
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}