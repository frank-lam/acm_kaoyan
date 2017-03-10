1.全排列问题 STL的应用
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



2007年北京大学计算机研究生机试真题

1110排序问题
题目：http://ac.jobdu.com/problem.php?pid=1110

#include <iostream>
#include <stdio.h>  
#include <string.h>
#include <string>
#include <algorithm> 
using namespace std;

typedef struct node{
	int weight;
	string color;
}node;

int main(){
	node rat[100];
	node temp;
	int n;
	while(cin>> n){
		for(int i=0;i<n;i++){
			//scanf("%d %s",&rat[i].weight,&rat[i].color);
			cin >> rat[i].weight >> rat[i].color;
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(rat[i].weight < rat[j].weight){
					temp=rat[i];
					rat[i]=rat[j];
					rat[j]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout << rat[i].color << endl;
		}

	}
	return 0;
}



错误代码：
#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
	int count;
	int a[100];
	string b[100];

	while(cin >> count){
		int i=1;
		while (i<=count){
			cin >> a[i];
			cin >> b[i];
			i++;
		}

		int temp_int;
		string temp_str;
		for(int i=1;i<=count;i++){
			for(int j=i;j<=count; j++){
				if(a[i]<a[j]){
					temp_int=a[i];
					a[i]=a[j];
					a[j]=temp_int;

					temp_str=b[i];
					b[i]=b[j];
					b[j]=temp_str;
				}
			}
		}

		for(int i=1;i<=count;i++){
			cout << b[i] << endl;
		}
	}


	return 0;
}





