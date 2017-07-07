#include <stdio.h>

// returns 1 if no overflow occurred during unsigned addition
int uadd_ok(unsigned x, unsigned y){
    unsigned sum = x+y;
    return sum >= x;
}



int main(void){
    return uadd_ok(1, 6);
}