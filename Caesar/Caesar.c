#include <stdlib.h>
#include <stdio.h>

char caesar(char sign, int shift) {

	char first, last;
	int length = 26;

	if (sign >= 'a' && sign <= 'z') {
		first = 'a';
		last = 'z';
	}
	else if (sign >= 'A' && sign <= 'Z') {
		first = 'A';
		last = 'Z';
	}
	else {
		return sign;
	}


	if (sign > last) {
		sign -= length;
	}
	else if (sign < first) {
		sign += length;
	}
	else { sign += shift % length; }
	return sign;
}

int main(int argc, char *argv[]) {
	char sign;
	FILE *input = fopen(argv[2], "r");
	FILE *output = fopen(argv[3], "w");

	while (fscanf(input, "%c", &sign) == 1) {
		fprintf(output, "%c", encrypt(sign, atoi(argv[1])));
	}

	fclose(input);
	fclose(output);
}
