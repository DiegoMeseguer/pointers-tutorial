#include <stdio.h>
#include <stdlib.h>

int mycompare(const void *a, const void *b) {
    //int A, B;

    //A = *((int*)a);
    //B = *((int*)b);
    //return B - A;

    const int * A;
    const int * B;
    A = a;
    B = b;

    return((*A > *B) - (*A < *B));
}

int compare_gt(int a, int b) {
    if(a > b)
        return 1;
    else
        return -1;
}

int compare_lt(int a, int b) {
    if(a > b)
        return -1;
    else
        return 1;
}

int compare_abs(int a, int b) {
    
    if(a < 0)
        a = a * (-1);

    if(b < 0)
        b = b * (-1);

    if(a > b)
        return -1;
    else
        return 1;
}

void bubble(int *arr, int size, int (*compare)(int, int)) {
    int temp, counter = 0;
    for(int j = 0; j < size; j++) {
        for(int i = 0; i < size - 1; i++) {
            if(compare(arr[i], arr[i + 1]) > 0) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                counter++;
            }
        }
        if(counter == 0)
            break;
    }
}

void A() {
    printf("Hello\n");
}

void B(void (*ptr)()) { // function pointer as argument
    ptr(); // call-back function that "ptr" points to
}

int main() {

    B(A); //A is callback function
    
    // Practical example
    int size, arr[] = {-31,22,-1,50,-6,4};
    size = sizeof(arr) / sizeof(int);
    bubble(arr, size, compare_abs);
    for(int i = 0; i < size; i++)
        printf("%i ", arr[i]);


    // qsort example
    printf("\n qsort Example\n");
    int size2, arr2[] = {3,2,1,50,6,4};
    size2 = sizeof(arr2) / sizeof(int);

    qsort(arr2, size2, sizeof(int), mycompare);

    for(int i = 0; i < size2; i++)
        printf("%i ", arr2[i]);



    return 0;
}





