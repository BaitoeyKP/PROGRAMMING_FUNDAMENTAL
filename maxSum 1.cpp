// 64010045 KANYARAT PHOOKOSOT
#include <stdio.h>
int main()
{
	int a, b, c, x, y, z;
	printf("Enter three number : ");
	scanf("%d %d %d", &a, &b, &c);
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
	return 0;
}
