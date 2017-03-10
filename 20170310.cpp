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