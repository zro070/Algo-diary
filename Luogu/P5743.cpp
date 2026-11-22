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
    int n;
    cin>>n;
    /*
    x -> y=[x/2-1] -> y/2-1
    (1 + 1)*2 逆着复原
    */
    int ans=1;
    for(int i=1;i<n;i++){
        ans=(ans+1)*2;
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