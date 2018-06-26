
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ISIZE 2
#define WSIZE ( ISIZE + 1 ) // weights + bias
typedef float wvector[ WSIZE ];
void main() {
wvector kk;

kk[0] = 8.0;
kk[1] = 8.0;

kk[2] = 8.0;

for (int i =0;i < WSIZE;i++) {


printf("%f\n", kk[i]);
}
}

