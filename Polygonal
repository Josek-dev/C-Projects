#include <stdio.h>
#include <math.h>

struct Point
{
	double x;
	double y;
};

double dst(struct Point a, struct Point b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
	struct Point a, b;
	double len = 0;
	if (scanf("%lg%lg", &a.x, &a.y) != 2)
	{
		return 0;
	}

	if (scanf("%lg%lg", &b.x, &b.y) != 2)
	{
		printf("0");
		return 0;
	}
	len += dst(a, b);
	while (scanf("%lg%lg", &a.x, &a.y) == 2)
	{
		len += dst(a, b);
		b.x = a.x;
		b.y = a.y;
	}
	printf("%lg", len);
	return 0;
}
