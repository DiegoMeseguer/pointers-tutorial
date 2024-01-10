#include <stdio.h>

int main() {

    int B[2][3] = {{1,2,3},{4,5,77}};
    int (*p)[3] = B; // Pointer to an array of three integers

    printf("%i\n", B[1][2]);    //77

    //B[i][j] = *(B[i] + j)
    //        = *(*(B + i) + j)
    
    printf("%i\n", *(p[1] + 2));    //77
    printf("%i\n", *(*(p+ 1) + 2));    //77


}

