#include <stdio.h>

int main() {
    FILE *fptr;
    fptr=fopen("identifiers.c","r");
    fclose(fptr);
    return 0;
}