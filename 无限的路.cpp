#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int arr[100][4] = { 0 };
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	 i = 0;
	for(i=0;i<n;i++)
	{
	  if (arr[i][0] + arr[i][1] > arr[i][2] + arr[i][3])
		{
			int tmp = arr[i][0];
			arr[i][0] = arr[i][2];
			arr[i][2] = tmp;
			int exc = arr[i][1];
			arr[i][1] = arr[i][3];
			arr[i][3] = exc;
		}
		int x = arr[i][0] + arr[i][1];
		int y = arr[i][2] + arr[i][3];
		double distance = 0.0000;
		
		if (x != y)
		{
				distance += (x + y) * (y - x - 1) / 2 * sqrt(2) ;
				distance+=(arr[i][1] + arr[i][2]) * sqrt(2); 
				int k = 0;
				for (k = x + 1; k <= y; k++)
				{
					int j = 0;
					int num = 1;
					for (j = 0; j < k; j++)
					{
						num += 4 * j;
					}
					distance += sqrt(num);
				}
				printf("%.3f\n", distance);
			
		}
		else
		{
				if (arr[i][0] > arr[i][2])
				{
					printf("%.3f\n", (arr[i][0] - arr[i][2]) * sqrt(2));
					
				}
				else
				{
					printf("%.3f\n", (arr[i][0] - arr[i][2]) * sqrt(2));
				
				}	
     	} 
	}
	return 0;
}
