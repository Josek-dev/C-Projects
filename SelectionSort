#include <stdio.h>

int selection_sort(int table[], int length) {

    int i, j, k, min, temp;

    for(i=0; i<length-1; ++i) {
        min=i;
        for(j=i+1; j<length; ++j) {
            if(table[j]<table[min]) {
                min=j;
            }
        }

        temp=table[i];
        table[i]=table[min];
        table[min]=temp;

        for(k=0; k<length; ++k) {
            printf("%d ", table[k]);
        }
        printf("\n");
    }
}


int main() {
    int table[] = {3, 7, -1, 12, -5, 7, 10};
    selection_sort(table, 7);
return 0; }
