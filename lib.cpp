C/C++常用函数库
// C++库常用函数一览 - candyliuxj - 博客频道 - CSDN.NET
// http://blog.csdn.net/candyliuxj/article/details/6313191

## sort排序函数的用法

#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

bool compare(int a,int b)
{
	return a<b; //升序排列，如果改为return a>b，则为降序
}
int main()
{
	int a[20]={2,4,1,23,5,76,0,43,24,65},i;
	sort(a,a+10,compare);
	for(i=0;i<10;i++)
		cout<<a[i]<<endl;
	return 0;
}




## c_str 和 next_permutation
c_str 取得C风格的const char* 字符串

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



## memset用法

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // 不可以声明为 char *str = "http://c.biancheng.net";
    char str[] = "http://c.biancheng.net";
    memset(str, '-',7);
    puts(str);
    system("pause");
    return EXIT_SUCCESS;
}