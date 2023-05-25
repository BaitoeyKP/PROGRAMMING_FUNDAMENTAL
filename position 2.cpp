// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char num[100];
	printf("Enter number : ");
	scanf("%s", &num);
	for (int i = 0; i < strlen(num); i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
		{
			printf("Array[%d] = %c\n", i, num[i]);
		}
		else
		{
			system("cls");
			printf("Enter number : %s\n", num);
			printf("error");
			break;
		}
	}
	return 0;
}
