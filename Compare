#include <stdio.h>
int grep(char line[], char word[]) {

    int i, j;

    for(i=0; line[i]; ++i) {
        for(j=0; word[j]; ++j) {
            if(line[i]==word[j]) {
                ++i;
            }
            else {
                break;
            }
        }
        if(ok) { return 1; }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    FILE *input = fopen(argv[2], "r");
    char line[255];

    while(fgets(line, 255, input)) {
        if (grep(line,argv[1])) {
            printf("%s", line);
        }
    }
    fclose(input);
}
