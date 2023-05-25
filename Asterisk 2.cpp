#include <stdio.h>
int main()
{
	int i;
	printf("ENTER NUMBER : ");
	scanf("%d", &i);
	while (i > 0)
	{
		printf("*");
		i = i - 1;
	}
}
