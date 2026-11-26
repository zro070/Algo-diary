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
高精减结果需要去除前导零
*/

bool cmp(vi& A,vi& B);
vi sub(vi& A,vi& B);

inline void solve(){
    string a,b;
    vi A,B,C;
    cin>>a>>b;
    for(int i=a.size() - 1;i>=0;i--) A.pb(a[i] - '0');
    for(int i=b.size() - 1;i>=0;i--) B.pb(b[i] - '0');

    // 大 - 小
    if(cmp(A,B)){ // A>B  A-B
        C = sub(A,B);

        for(int i=C.size() - 1;i>=0;i--) cout<<C[i];
    }
    else{ // 加'-'
        C = sub(B,A);
        
        cout<<'-';
        for(int i=C.size() - 1;i>=0;i--) cout<<C[i];
    }

}

vi sub(vi& A,vi& B){ // 大 - 小  A:大
    vi C;
    int t=0; // 借位 
    // 高精加和减的t都是模拟当前位
    for(int i=0;i<A.size();i++){
        t = A[i]-t; // 当前位有借位则-1
        if(i<B.size()) t -= B[i];
        C.pb((t+10)%10); // 防止不够减，t变为负数
        if(t<0) t=1; // 是否需要借位——放到后面判断
        else t=0;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back(); // 前导零 高位在末尾 back pop

    return C;
}

bool cmp(vi& A,vi &B){ // T:A > B
    if(A.size() != B.size()) return A.size() > B.size(); // 位数不相等
    for(int i=A.size() - 1;i>=0;i--){
        if(A[i]!=B[i]) return A[i] > B[i];
    }
    return true; // A==B
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}