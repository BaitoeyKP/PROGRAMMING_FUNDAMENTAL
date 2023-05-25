// 64010045 KANYARAT PHOOKOOT
#include <stdio.h>
int main()
{
	float height[10], sum = 0, avg;
	for (int i = 1; i <= 10; i++)
	{
		printf("Enter student's height(cm) [%d] : ", i);
		scanf("%f", &height[i - 1]);
	}
	printf("\n");
	for (int j = 0; j < 10; j++)
	{
		printf("Student's height(cm) [%d] : %.2f\n", j + 1, height[j]);
	}
	printf("\n");
	for (int k = 0; k < 10; k++)
	{
		sum = sum + height[k];
	}
	avg = sum / 10;
	printf("Average height is %.2f", avg);
	return 0;
}
