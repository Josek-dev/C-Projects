#include <stdio.h>

const int* find(const int *begin, const int *end, int x) {
	for(int *i = (int*)begin; i < end; ++i) {
		if(x == *i) {
			return i;
		}
	}
	return end;
}

int main()
{
	const int table[] = {1, 7, -5, 2, 8, -5, 3};
	printf("%li\n", find(table + 3, table + 7, -5) - table);
	return 0;
}
