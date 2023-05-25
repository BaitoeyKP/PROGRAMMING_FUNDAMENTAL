// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
int main()
{
	int n;
	int x = 1;
	printf("Enter number : ");
	scanf("%d", &n);
	while (x <= n)
	{
		int y = 1;
		while (y <= n)
		{
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
	return 0;
}
