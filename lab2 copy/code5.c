#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int sum = 0;
    int digit;

    while (num != 0) {
        digit = num % 10;   
        if (digit % 2 == 0) 
            sum += digit;   
        num /= 10;          
    }

    printf("Sum of even digits: %d\n", sum);
    return 0;
}