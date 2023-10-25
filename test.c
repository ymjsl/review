#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//文本文件和二进制文件
//以二进制存储占据内存可能会更小
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("C:\\Users\\admin\\Desktop\\cnm.txt.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
 //feof 应用于当文件读取结束时，为真 读到末尾
 // 判断读取失败结束还时遇到文件尾结束
 // ferror 判断读取是否错误   为真   读取错误     配合使用
//判断文件是否结束看函数返回值
//fgetc  EOF
//fgets  NULL
//fread  返回的是实际读到的个数，比较个数
//文件缓冲区
//输入缓冲区  输出缓冲区
//sleep() 单位毫秒
//程序环境和预处理
//翻译环境  执行环境
//链接器 link.exe
//编译器 cl.exe 
// 编译（预编译/预处理           编译             汇编）    链接
//  生成新的文件在新文件中   将c转换成汇编代码  gcc test.s-c
//   头文件包含 ，define        语法分析        生成test.o
 //    定义符号替换             词法分析        目标文件
//      符号删除                符号汇总      （全是二进制指令）
//     删除注释                 语义分析       形成符号表
//                            生成test.s        
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//struct S
//{
//	int count;
//	int arr[];
//};
//struct num
//{
//	struct S* s1;
//};
//int cmp_stu_by_arr(const void* e1, const void* e2)
//{
//	return  ((struct num*)e1)->s1->arr - ((struct num*)e2)->s1->arr;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		struct num* p1 = (struct num*)malloc(4 * n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &(p1->arr[i]));
//			
//		}
//		qsort(p1, sizeof(struct S), n, cmp_stu_by_arr);
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", p1->count);
//		}
//		return 0;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	int a;
//	scanf("%d", &a);
//	int arr[100];
//	int brr[100];
//	for (i = 0; i < a; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < a; i++) {
//		brr[i] = arr[i];
//	}
//	for (i = 0; i < a -1; i++) {
//		for (j =i; j < a ; j++) {
//			if (arr[j] < arr[j + 1]) {
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}for (i = 0; i < a; i++) {
//		for (j = 0; j < a; j++) {
//			if (arr[i] == brr[j]) {
//				printf("%d ", j + 1);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}
#include <stdio.h>

int main() {
	int i, j;
	int a;
	scanf("%d", &a);
	int arr[100];
	int brr[100];
	for (i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < a; i++) {
		brr[i] = arr[i];
	}

	for (i = 0; i < a - 1; i++) {
		for (j = 0; j < a - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++) {
			if (arr[i] == brr[j]) {
				printf("%d ", j + 1);
				break;
			}
		}
	}

	return 0;
}
