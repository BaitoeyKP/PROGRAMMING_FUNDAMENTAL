// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	printf("Enter number : ");
	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
