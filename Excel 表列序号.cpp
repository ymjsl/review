#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ch[100];
    scanf("%s", ch);
    int n = strlen(ch);
    int i = n-1;
    int sum = 0;
    for(;i>=0;i--)
    {
    	 if (i == n - 1)
        {
            sum += ch[i] - 64;
        }
        else
        {
            sum += (ch[i] - 64) * pow(26, n - 1 - i);
        }
	}
    printf("%d", sum);
    return 0;
}
