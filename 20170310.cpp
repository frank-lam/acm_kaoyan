1.全排列问题 STL的应用
// 参考 http://www.slyar.com/blog/stl_next_permutation.html
// C++库常用函数一览 - candyliuxj - 博客频道 - CSDN.NET
// http://blog.csdn.net/candyliuxj/article/details/6313191

#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
 
int main()
{
    string str;
    while(cin >> str){
        printf("%s\n",str.c_str());
        while (next_permutation(str.begin(),str.end()))
        {
            printf("%s\n",str.c_str());
        }
        puts("");
    }
    return 0;
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

1114：神奇的口袋

#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

int N;
int v[20];
int WayNumber(int done,int w);

bool cmp(int a,int b){
	return a<b;
}

int main(){ 
	while(cin >> N){
		for(int i=0;i<N;i++)
			cin >> v[i];
		sort(v,v+N,cmp);
		cout << WayNumber(0,40) << endl;
	}
	return 0;
}

int WayNumber(int done,int w){
	int result=0;
	if(w==0){
		return 1;
	}
	for(int i=done;i<N;i++){
		if(v[i] <= w){
			result = result + WayNumber(i+1,w-v[i]);
		}
	}
	return result;
}