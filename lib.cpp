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



## C++ replace的用法

// 参考
// C++ replace() 函数用法详解 - 笔记 - 博客频道 - CSDN.NET
// http://blog.csdn.net/glp_hit/article/details/8815509


/*用法一： 
 *用str替换指定字符串从起始位置pos开始长度为len的字符 
 *string& replace (size_t pos, size_t len, const string& str); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    line = line.replace(line.find("@"), 1, ""); //从第一个@位置替换第一个@为空  
    cout << line << endl;     
    return 0;  
}  

/*用法二： 
 *用str替换 迭代器起始位置 和 结束位置 的字符 
 *string& replace (const_iterator i1, const_iterator i2, const string& str); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    line = line.replace(line.begin(), line.begin()+6, "");  //用str替换从begin位置开始的6个字符  
    cout << line << endl;     
    return 0;  
} 

/*用法三： 
 *用substr的指定子串（给定起始位置和长度）替换从指定位置上的字符串 
 *string& replace (size_t pos, size_t len, const string& str, size_t subpos, size_t sublen); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    string substr = "12345";  
    line = line.replace(0, 5, substr, substr.find("1"), 3); //用substr的指定子串（从1位置数共3个字符）替换从0到5位置上的line  
    cout << line << endl;     
    return 0;  
}

/*用法四：string转char*时编译器可能会报出警告，不建议这样做 
 *用str替换从指定位置0开始长度为5的字符串 
 *string& replace(size_t pos, size_t len, const char* s); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    char* str = "12345";  
    line = line.replace(0, 5, str); //用str替换从指定位置0开始长度为5的字符串  
    cout << line << endl;     
    return 0;  
}

/*用法五：string转char*时编译器可能会报出警告，不建议这样做 
 *用str替换从指定迭代器位置的字符串 
 *string& replace (const_iterator i1, const_iterator i2, const char* s); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    char* str = "12345";  
    line = line.replace(line.begin(), line.begin()+9, str); //用str替换从指定迭代器位置的字符串  
    cout << line << endl;     
    return 0;  
}


/*用法六：string转char*时编译器可能会报出警告，不建议这样做 
 *用s的前n个字符替换从开始位置pos长度为len的字符串 
 *string& replace(size_t pos, size_t len, const char* s, size_t n); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    char* str = "12345";  
    line = line.replace(0, 9, str, 4);  //用str的前4个字符替换从0位置开始长度为9的字符串  
    cout << line << endl;     
    return 0;  
}

/*用法七：string转char*时编译器可能会报出警告，不建议这样做 
 *用s的前n个字符替换指定迭代器位置(从i1到i2)的字符串 
 *string& replace (const_iterator i1, const_iterator i2, const char* s, size_t n); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    char* str = "12345";  
    line = line.replace(line.begin(), line.begin()+9, str, 4);  //用str的前4个字符替换指定迭代器位置的字符串  
    cout << line << endl;     
    return 0;  
}

/*用法八： 
 *用重复n次的c字符替换从指定位置pos长度为len的内容 
 *string& replace (size_t pos, size_t len, size_t n, char c); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    char c = '1';  
    line = line.replace(0, 9, 3, c);    //用重复3次的c字符替换从指定位置0长度为9的内容  
    cout << line << endl;     
    return 0;  
}


/*用法九： 
 *用重复n次的c字符替换从指定迭代器位置（从i1开始到结束）的内容 
 *string& replace (const_iterator i1, const_iterator i2, size_t n, char c); 
 */  
int main()  
{  
    string line = "this@ is@ a test string!";  
    char c = '1';  
    line = line.replace(line.begin(), line.begin()+9, 3, c);    //用重复3次的c字符替换从指定迭代器位置的内容  
    cout << line << endl;     
    return 0;  
}

// 注：所有使用迭代器类型的参数不限于string类型，可以为vector、list等其他类型迭代器。

