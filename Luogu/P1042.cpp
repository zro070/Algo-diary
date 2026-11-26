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
直到分差大于或者等于 2，才一局结束。——读题，漏了条件

。。还有一点是有一方分数要大于分制分数

cnt设计错误（不用这个，已删
*/


inline void solve(){
    string s;char c;
    while(cin>>c && c!='E'){ // 读到E停止
        s+=c;
    }
    int len = s.size();
    int w=0,l=0;
    for(int i=0;i<len;i++){ // 11
        if(s[i]=='W')  w++;
        if(s[i]=='L')  l++;

        if(max(w,l)>=11 && abs(w-l)>=2) {
            cout<<w<<':'<<l<<endl;
            w=0,l=0;
        }
    }
    if(w|l) cout<<w<<':'<<l<<endl<<endl;
    else if(!(w&l)) cout<<w<<':'<<l<<endl<<endl;// 一开始就是E

    // 21
    w=0,l=0;
    for(int i=0;i<len;i++){ // 11
        if(s[i]=='W')  w++;
        if(s[i]=='L')  l++;

        if(max(w,l)>=21 && abs(w-l)>=2) {
            cout<<w<<':'<<l<<endl;
            w=0,l=0;
        }
    }
    if(w|l) cout<<w<<':'<<l<<endl;
    else if(!(w&l)) cout<<w<<':'<<l<<endl;
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}