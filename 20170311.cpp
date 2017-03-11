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