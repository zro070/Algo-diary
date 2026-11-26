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

struct stu{
    string name;
    int sc;
    int age;
};
stu a[5];

inline void solve(){
    /*
    score += score*1.2
    */
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].age>>a[i].sc;
        int sc = a[i].sc;
        sc = sc + sc * 0.2;
        if(sc>600) sc=600;
        cout<<a[i].name<<' '<<a[i].age+1<<' '<<sc<<endl;
    }
}

signed main(){
    int T = 1;
    // cin >> T;
    while(T--) {
        solve();
    }
}