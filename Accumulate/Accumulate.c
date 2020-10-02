#include <stdio.h>
void accumulate(double *begin, double *end)
{
	double sum = 0, tmp;
	for(double *it = begin; it != end; ++it)
	{
		tmp = *it;
		*it += sum;
		sum += tmp;
	}
}
int main()
{
	double table[] = {2.3, -1.5, 15.1, 0.3, 8};
	accumulate(table, table + 5);
	for(double *pointer = table; pointer < table + 5;)
	{
		printf("%lg ", *pointer++);
	}
	printf("\n");
	return 0;
}
