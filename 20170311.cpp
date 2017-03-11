/**************************************************************
    date: 20170311
    User: frank_ecnu
    Language: C++
    Accepted: 4
****************************************************************/
1074：对称平方数

#include <iostream>
#include <string>

using namespace std;

//获得相反数
int invertOrder(int a){
	int b=0;
	while(a){
		b=b*10+a%10;
		a=a/10;
	}
	return b;
}

int main(){
	int invertNum;
	for(int i=0;i<=256;i++){
		invertNum=invertOrder(i*i);
		if(invertNum==i*i){
			cout << i << endl;
		}
	}
	return 0;
}


1075：斐波那契数列

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int fun(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(n>=2)
		return fun(n-1)+fun(n-2);
}

int main(){
	int line;
	while(cin >> line){
		for(int i=1;i<=line;i++){
			for(int j=0;j<(2*i-1);j++){
				//如果已经到最后一个数值，则不要输出空格
				if((j+1)>=(2*i-1))
					cout << fun(j);
				else
					cout << fun(j) << " ";
			}
			cout << endl;
		}
	}
}


1112：拦截导弹
#include <iostream>
using namespace std;

int max(int a,int b){
	return a>b?a:b;
}
int main(){
	int dp[100],list[100];
	int n;
	int maxdp;

	while(cin >> n){
		for(int i=1;i<=n;i++)
			cin >> list[i];

		for(int i=1;i<=n;i++){
			maxdp=1;
			for(int j=1;j<i;j++){
				if(list[i]<=list[j]){
					maxdp=max(maxdp,dp[j]+1);
				}
			}
			dp[i]=maxdp;
		}
		int maxnumber=dp[1];
		for(int i=2;i<=n;i++)
			maxnumber=max(dp[i],maxnumber);
		cout << maxnumber << endl;
	}
}


1111：单词替换
九度题目1111：单词替换 - 点十八的一方天地 - 博客频道 - CSDN.NET
http://blog.csdn.net/fnzsjt/article/details/40432257

注意这道题目的陷阱：
替换的是单词，如果

Youwant someone to help you

You

I

这样是替换不了的。下面给出代码：

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;
int main(){
	string s,a,b;
	while(getline(cin,s)){
		getline(cin,a);
		getline(cin,b);
		s=" "+s+" ";
		a=" "+a+" ";
		b=" "+b+" ";
		int first=s.find(a);
		int len=a.size();
		if(first!=string::npos){
			s.replace(first,len,b);
		}
		s=s.replace(s.begin(),s.begin()+1,"");
		s=s.replace(s.size()-1,1,"");
		cout << s << endl;
	}
}
