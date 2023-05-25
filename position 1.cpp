// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
#include <string.h>
int main()
{
	char num[100];
	printf("Enter number : ");
	scanf("%s", &num);
	for (int i = 0; i < strlen(num); i++)
	{
		printf("Array[%d] = %c\n", i, num[i]);
	}
	return 0;
}
