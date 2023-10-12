#include <stdlib.h>
#include <stdio.h>


// static

int myVariable = 100;

int main(){

    // dynamic

    /* malloc */
    int *x = malloc(sizeof(int)); // give me space for one int
    int *arr = malloc(sizeof(int)*100); // give me space for 100 ints

    *x = 100;
    arr[2] = 2;
    /*arr[101] = 8*/; // don't execute out of range

    /* free */
    free(arr); // I don't want this memory anymore
    arr = NULL;

    /* calloc */
    double *darr;
    darr = calloc(sizeof(double), 100); // is the same as -- darr = malloc(sizeof(double)*100);

    /* realloc */
    darr = realloc(darr, sizeof(double)*500); // risize "darr"
}
