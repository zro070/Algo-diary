#include<bits/stdc++.h>
using namespace std;

/* 
1. 字符串-数字 映射
2. 平方、%100
3. 找如何拼起来最小的那个数 ~~1)去前导零~~ 2)排序

代码：
1. 0 -> 00 没必要做映射进行处理 -1)
    - 正规数字直接对应下标，也不需要重新映射
2. 输出.停止

处理：%02d
*/
int main(){
	string num[25]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    string unum[6]={"a", "both", "another", "first", "second", "third"};
    int u[6]={1,2,1,1,2,3};
    
    string s;
    int a[6],idx=0; // 记录数字
    while(cin>>s && s!="."){
        for(int i=0;i<25;i++){
            if(s==num[i]) a[idx++]=(i+1)*(i+1)%100; 
        }
        for(int i=0;i<6;i++){
            if(s==unum[i]) a[idx++]=u[i]*u[i]%100;
        }
    }
    sort(a,a+idx);
    // AC!
    int f=0;
    for(int i=0;i<idx;i++) {
        if(!f){
            cout<<a[i];
            f=1;
        } 
        else printf("%02d",a[i]);
    }
    if(!idx) cout<<0; // 特判没有数字的情况
	
	return 0;
}