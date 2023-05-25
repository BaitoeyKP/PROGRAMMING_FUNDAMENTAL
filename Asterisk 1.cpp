#include <stdio.h>
int main()
{
	int i;
	printf("ENTER NUMBER : ");
	scanf("%d", &i);
	while (i--)
	{
		printf("*");
		if (i == 0)
			break;
	}
}
