/************************ Matrix.cpp ************************/

#include <stdio.h>
#include <stdlib.h>

void MultiplyAx(float *A, int n, int m, float *x, float *y) {

    int i, j;

    for (i = 0; i < n; i++) {
        y[i] = 0;
        for (j = 0; j < m; j++) {
            y[i] += (*A * x[j]) ;
            A++;
        }
    }
}