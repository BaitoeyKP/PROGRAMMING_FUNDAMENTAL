#include <stdio.h>
int a, b;
int swap(int *x, int *y)
{
	int c = *x;
	*x = *y;
	*y = c;
}
int main()
{
	printf("Enter 2 number : ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
