// 64010045 KANYARAT PHOOKOOT
#include <stdio.h>
int main()
{
	float height[10], sum = 0, avg;
	int i = 1, j = 0, k = 0;
	while (i <= 10)
	{
		printf("Enter student's height(cm) [%d] : ", i);
		scanf("%f", &height[i - 1]);
		i++;
	}
	printf("\n");
	while (j < 10)
	{
		printf("Student's height(cm) [%d] : %.2f\n", j + 1, height[j]);
		j++;
	}
	printf("\n");
	while (k < 10)
	{
		sum = sum + height[k];
		k++;
	}
	avg = sum / 10;
	printf("Average height is %.2f", avg);
	return 0;
}
