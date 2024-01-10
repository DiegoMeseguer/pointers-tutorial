#include <stdio.h>

void func(int A[][2][2]) // All other dimensions have to be specified
{}

int main() {

    int C[3][2][2] = {
    {{2, 5}, {7, 9}},
    {{3, 4}, {6, 1}},
    {{0, 8}, {11, 13}}
    };

    int (*p)[2][2] = C;

    printf("%p\n", C);

    /*
    Member:
    C[i][j][k]  = *(C[i][j] + k)
                = *(*(C[i] + j) + k)
                = *(*(*(C + i) + j) + k)    
    */

   printf("%i\n", *(p[0][1] + 1)); //9
   printf("%i\n", *(p[0][0] + 1)); //5

    func(C);


    return 0;
}

