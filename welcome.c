#include <stdio.h>

int main() {
    printf("welcome to c program\n");
    printf("ASE\nBANGALORE\nKARNATAKA\n");

    char name[10];
    char address[15];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("your address: ");
    scanf("%s", address);

    printf("Your name is: %s\n", name);
    printf("your address: %s\n",address);
    
    
}

