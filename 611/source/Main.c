#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, tmp;
	int a[5];
	printf("Enter 5 integers:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		printf("Loop %d¡G ", i);
		for (j = 0; j < 5; j++)
			printf("%4d", a[j]);
		printf("\n");
	}
	

	system("pause");
	return 0;
}