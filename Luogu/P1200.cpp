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
    int num = (ch - 'A' + 1) % 47
    */
   string s1,s2;
   cin>>s1>>s2;
   int n1=1,n2=1;
   for(int i=0;i<s1.size();i++) n1 *= s1[i]-'A'+1;
   for(int i=0;i<s2.size();i++) n2 *= s2[i]-'A'+1;
   if(n1%47 == n2%47) cout<<"GO";
   else cout<<"STAY"; 
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}