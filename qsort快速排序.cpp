#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void*e1,const void*e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
int cmp_stu_by_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age- ((struct Stu*)e2)->age;
}
int cmp_int(const void*e1,const void*e2)
{
	return ((int*)e1-(int*)e2);//比较整型 
}
int cmp_char(const void*e1,const void*e2) 
{
	return((char*)e1)-((char*)e2);//比较字符型 
}
int cmp_char_num(const void*e1,const void*e2)
{
	return strcmp(((char*)e1),((char*)e2));//比较字符串 
 } 
int main()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25}};
	int sz = sizeof(s) / sizeof(s[0]);
	int(*cmp)[5]={cmp_stu_by_name,cmp_stu_by_age, cmp_int,cmp_char,cmp_char_num};
	int i=0;
	qsort(s, sz, sizeof(s[0]), (*cmp)[i]);
	//int i=0;
	//for(i=0;i<3;i++)
//	{
//		printf("%s %d\n",s[i].name,s[i].age);
//	}
    
	return 0;
 } 
