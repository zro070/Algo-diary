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

bool is_prime(int x){
    int f=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0) return false;
    }
    return true;
}

inline void solve(){
    int n;
    cin>>n;
    /*
    4~n 的偶数 ou
    函数： 从小到大枚举质数 x  +  判断 ou-x 是否为质数
    */
    for(int j=4;j<=n;j+=2){
        int x=0;
        for(int i=2;i<=j/2;i++){
            if(is_prime(i) && is_prime(j-i)){
                x=i;
                break;
            } 
        }
        cout<<j<<'='<<x<<'+'<<j-x<<endl;
    }
    
        
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}