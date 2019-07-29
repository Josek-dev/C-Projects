#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

    int CharsArray[26] = {};
    FILE *input = fopen(argv[1], "r");

    if(input) {
        char text;
        do {
            text = fgetc(input);
            int ourChars = text - 'a';
            int BigChars = text - 'A';

            if(ourChars >= 0 && ourChars < 26)
                ++ CharsArray[ourChars];
            if(BigChars >= 0 && BigChars < 26)
                ++ CharsArray[BigChars];

        }
        while(text != EOF);

            int i;
            for(i = 0; i < 26; ++i)
            printf("%d ", CharsArray[i]);
    }

fclose(input);
return 0;
}
