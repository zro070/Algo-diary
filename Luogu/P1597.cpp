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
    输入、**赋值**
    ->字母只有a,b,c  未赋值的字母为0（初始化）

    debug:字符转换
    */
    int a[3]={0}; // [x] 初始化
    string s;
    cin>>s;
    int len = s.size(), f=0, idx=-1;
    for(int i=0;i<len;i++){
        if(s[i]>='a'&&s[i]<='c'){
            if(!f) { // 等号前，定哪个字母-下标
                idx=s[i]-'a';
            }
            else { // =后，赋值
                a[idx]=a[s[i]-'a'];
                // f=0;
            }
        }
        else if(s[i]==':'||s[i]=='=') {
            f=1;
        }
        else if(s[i]==';') f=0;
        else { // 数字
            a[idx]=s[i]-'0'; // 字符-数字转换
            f=0;
        }
    }
    cout<<a[0]<<' '<<a[1]<<' '<<a[2];
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}