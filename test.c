#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>
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
//#define PRINT(n) printf("the value of "#n" is %d\n",n)
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//	int a = 10;
//	int b = 20;
//	/*printf("the value of a is %d\n", a);
//	printf("the value of b is %d\n", b);*/
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
//struct date
//{
//	int DAY;
//	int MONTH;
//};
//void if_run(int x, struct date* p)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		p[1].DAY = 29;
//	}
//}
//int main()
//{
//	int year = 0;
//	int day=0;
//	int month=0;
//	char ch[100];
//	assert(scanf("%s", ch));
//	assert(sscanf(ch, "%d-%d-%d", &year, &month, &day));
//	struct date p[12] = { {31,1},{30,2},{31,3},{30,4},
//		                  {31,5},{30,6},{31,7},{31,8},
//		                  {30,9},{31,10},{30,11},{31,12} };
//	if_run(year,p);
//	if (month > 1)
//	{
//		int sum = 0;
//		for (int i = 0; i < month-1; i++)
//		{
//			sum += p[i].DAY;
//		}
//		sum += day;
//		printf("%d", sum);
//	}
//	else
//		printf("%d", day);
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	char arr[12] = { 0 };
//	int arr2[5] = { 0 };
//	for (int i = 0; i <11; i++)
//	{
//		assert(scanf("%c",&arr[i]));
//	}
//	assert(scanf("%d",&k));
//	int a = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] != 32)
//		{
//			arr2[a] = arr[i]-48;
//			a++;
//		}
//	}
//	int j = 0;
//	for (j = 1; j <= 5; j++)
//	{
//		if (j%k==0)
//		{
//			int n = (j / k-1)*2;
//			for (int i = n; i < n+k - 1; i++)
//			{
//				for (int m = i + 1; m < n+k; m++)
//				{
//					int tmp = arr2[i];
//					arr2[i] = arr2[m];
//					arr2[m] = tmp;
//				}
//			}
//		}
//	}
//	for (j = 0; j < 5; j++)
//	{
//		if (j != 4)
//		{
//			printf("%d->", arr2[j]);
//		}
//		else
//		{
//			printf("%d", arr2[j]);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int main(){
//	char a[100000];
//	int b = 0;
//	fgets(a, 100000, stdin);
//	int ret = strlen(a);
//	for (int i = 0;i<ret-1; i++) {
//		for (int j = i + 1; j < ret; j++){
//
//		}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main() {
	char a[100000];
	gets(a);
	int l = strlen(a);
	int j = 0;
	for (int i =0; i < l - 1; i++) {
		for ( j = i + 1; j < l; j++) 
		{
			if (a[i] == a[j]) {
				break;
			}
		}
		for ( j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				break;
		}
		if (j == i)
		{
			printf("%c", a[i]);
			return 0;
		}
	}
	printf("no\n");
	return 0;
}
