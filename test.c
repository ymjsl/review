#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//�ı��ļ��Ͷ������ļ�
//�Զ����ƴ洢ռ���ڴ���ܻ��С
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("C:\\Users\\admin\\Desktop\\cnm.txt.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
 //feof Ӧ���ڵ��ļ���ȡ����ʱ��Ϊ�� ����ĩβ
 // �ж϶�ȡʧ�ܽ�����ʱ�����ļ�β����
 // ferror �ж϶�ȡ�Ƿ����   Ϊ��   ��ȡ����     ���ʹ��
//�ж��ļ��Ƿ��������������ֵ
//fgetc  EOF
//fgets  NULL
//fread  ���ص���ʵ�ʶ����ĸ������Ƚϸ���
//�ļ�������
//���뻺����  ���������
//sleep() ��λ����
//���򻷾���Ԥ����
//���뻷��  ִ�л���
//������ link.exe
//������ cl.exe 
// ���루Ԥ����/Ԥ����           ����             ��ࣩ    ����
//  �����µ��ļ������ļ���   ��cת���ɻ�����  gcc test.s-c
//   ͷ�ļ����� ��define        �﷨����        ����test.o
 //    ��������滻             �ʷ�����        Ŀ���ļ�
//      ����ɾ��                ���Ż���      ��ȫ�Ƕ�����ָ�
//     ɾ��ע��                 �������       �γɷ��ű�
//                            ����test.s        
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
