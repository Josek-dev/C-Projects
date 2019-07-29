#include<stdlib.h>
#include <stdio.h>
#include <time.h>
int coin(double possibility){
    double random = (double)rand()/(RAND_MAX);
    if(random < possibility){
        return 1;
    } else {
        return 0;
    }
}
int main() {srand(time(NULL));for (int counter = 0; counter < 10; ++counter) {printf("%s ", coin(0.2) ? "heads" : "tails"); }printf("\n");return 0; }
