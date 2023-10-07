#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char ch[100];
	scanf("%s", ch);
	int i = 0;
	int n = strlen(ch);
	for (i = 0; i < n; i++)
	{
		if (ch[i] +ch[i+1] ==-172 && ch[i + 2]+ch[i+3] ==-96)
		{
			printf("parallel");
			i += 4;
		}
		printf("%c", ch[i]);
	}
	return 0;
}
