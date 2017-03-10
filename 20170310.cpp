
// ##1.全排列问题 STL的应用
// 参考 http://www.slyar.com/blog/stl_next_permutation.html
// C++库常用函数一览 - candyliuxj - 博客频道 - CSDN.NET
// http://blog.csdn.net/candyliuxj/article/details/6313191

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	char str[10];
	int len;
	while(scanf("%s",str)!=EOF){
		len = strlen(str);		
		do{
			printf("%s\n",str);
		}while(next_permutation(str,str+len));
		puts("");
	}
}