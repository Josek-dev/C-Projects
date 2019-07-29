#include <stdio.h>

struct Range {
    double start,end;
};

int exclusive (const struct Range *a, const struct Range *b) {
    if(a->start > b->end || a->end < b->start) {
        return 1;
    }
    else { return 0; }
}

int all(const struct Range *tab, int len) {
        for(int i=0; i<len; ++i) {
            for(int j=i+1; j<len; ++j) {
                if(!exclusive(&tab[i],&tab[j])) {
                    return 0; }}}
        return 1;
}

int main() {
    const struct Range range1 = {-2, 3}, range2 = {5, 7};
    const struct Range ranges[] = {{-3,-1},{-2,3},{5,7}};
    printf("%i %i\n", exclusive(&range1, &range2), all(ranges, 3));
}
