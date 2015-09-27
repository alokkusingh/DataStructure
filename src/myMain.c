#include <stdio.h>
#include "getBinary.h"
#include "getOctal.h"
#include "getHex.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <decimal numbre>", argv[0]);
        return 1;
    } 
    printf ("Binary: ");
    getBinary(atoi(argv[1]));     
    printf ("Octal: ");
    getOctal(atoi(argv[1]));     
    printf ("Hex: ");
    getHex(atoi(argv[1]));     
    
return 0;
}


