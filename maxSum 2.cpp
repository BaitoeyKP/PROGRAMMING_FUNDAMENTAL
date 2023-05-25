// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
int sum(int, int, int);

int main()
{
	int a, b, c;
	printf("Enter three number : ");
	scanf("%d %d %d", &a, &b, &c);
	sum(a, b, c);
	return 0;
}

int sum(int a, int b, int c)
{
	int x, y, z;
	x = a + b;
	y = a + c;
	z = b + c;
	if (x > y && x > z)
	{
		printf("%d + %d = %d", a, b, x);
	}
	else if (y > x && y > z)
	{
		printf("%d + %d = %d", a, c, y);
	}
	else if (z > x && z > y)
	{
		printf("%d + %d = %d", b, c, z);
	}
}
