#include "library.h"

#include <stdio.h>

void hello(void) {
    printf("Hello, World!\n");
}

int add(int a, int b) {
    printf("Une addition est en cours, patientez.");
    return a+b;
}