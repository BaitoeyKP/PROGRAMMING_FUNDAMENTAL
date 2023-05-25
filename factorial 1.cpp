// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
int factorial(int);
int m, n, f = 1;

int main()
{
	printf("Enter number : ");
	scanf("%d", &n);
	factorial(n);
	printf("%d! = %d", n, f);
	return 0;
}

int factorial(int)
{
	m = n;
	for (m = 1; m <= n; m++)
	{
		f *= m;
	}
}
