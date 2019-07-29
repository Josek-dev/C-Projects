#include <math.h>
#include <stdio.h>
double quadratic(double *x1, double *x2, double a, double b, double c) {
	double delta = b*b-4*a*c;

	if (delta > 0) {
		*x1 = (-b-sqrt(delta))/(2*a);
		*x2 = (-b+sqrt(delta))/(2*a);
	}
	else if (d == 0) {
		*x1 = (-b/(2*a));
		*x2 = *x1;
	}
	return delta;
}

int main()
{
	double delta, x1, x2;
	delta = quadratic(&x1, &x2, 1.2, 3.7, -4);
	printf("%lg\n", delta);
	printf("%lg %lg\n", x1, x2);
	return 0;
}
