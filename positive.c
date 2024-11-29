
#include <stdio.h>

int is_positive(int number) {
    if (number > 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num = 10;

    if (is_positive(num)) {
        printf("%d is positive.\n", num);
    } else {
        printf("%d is not positive.\n", num);
    }

    return 0;
}

