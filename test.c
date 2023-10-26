#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//程序员的自我修养 c陷阱和缺陷
//预定义符号
//__FILE__
//__LINE__
//__TIME__
//__DATE__
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("C:\\Users\\admin\\Desktop\\cnm.txt.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s line=%d date:%s i=%d\n",\
//          __FILE__,\
//          __LINE__,\
//          __DATE__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//define 定义标识符
//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")
//int main()
//{
//	int m = MAX;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	print;
//	return 0;
//}
//#define CASE break;case
//
//int main()
//{
//	switch ()
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	CASE 4:
//	}
//	return 0;
//}
//#define 定义宏    不要吝啬括号！！
//#define name() stuff
//#define SQUARE(x) pow(x,2)
//// name 必须与(紧邻
//int main()
//{
//	int r = SQUARE(5+1);//1
//	//只替换不计算参数
//	//int r=5+1*5+1=11
//	printf("%d\n", r);
//	return 0;
//}
//#define DOUBLE(x) ((x)+(x))
//int main()
//{
//	int r = DOUBLE(3*2);
//	printf("%d\n",r);
//	return 0;
//}
//替换规则
//首先替换define 定义的
//然后替换宏   只替换不计算参数
//宏不能递归
//字符串里的字符不会被替换
//      #      和       ##
//将参数插入字符串
//void print(int n)
//{
//	printf("the value of n %d\n", n);
//}
#define PRINT(n) printf("the value of "#n" is %d\n",n)
int main()
{
	/*printf("hello world\n");
	printf("hello ""world\n");*/
	int a = 10;
	int b = 20;
	/*printf("the value of a is %d\n", a);
	printf("the value of b is %d\n", b);*/
	PRINT(a);
	PRINT(b);
	return 0;
}