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
    string s,s1;
    for(int i=0;i<4;i++){
        getline(cin,s1);
        s+=s1;
    }
    vi a(s.size());
    int ma=-1;
    for(int i=0;i<s.size();i++) {
        if(s[i]>='A'&&s[i]<='Z'){
            a[s[i]-'A']++; // 计数
            ma=max(ma,a[s[i]-'A']);  // [x] 别放if外
        }
        
    }
    // 从后往前找（26）>= 高度(ma)  ：横向输出到哪里
    int st=0,t=ma; // [x] 别放循环里
    for(int i=0;i<ma;i++){ // 最多几行
        
        for(int j=25;j>=0;j--){
            if(a[j]>=t) {
                st=j;
                break;
            }
        }
        for(int j=0;j<26;j++){ // 每一行
            if(a[j]>=t) cout<<'*';
            else cout<<' ';
            if(j==st) {
                cout<<endl;
                break;
            }
            cout<<' ';
        }
        t--;
    }
    for(int i=0;i<25;i++) cout<<char('A'+i)<<' ';
    cout<<'Z';
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}