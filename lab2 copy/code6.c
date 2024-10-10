#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, result = 0, factor = 1;
    scanf("%d", &num);

    num = abs(num);
    while (num > 0) {
        int digit = num % 10;  
        if (digit != 0) {
            result = result + digit * factor; 
            factor *= 10;        
        }
        num /= 10;        
    }

    printf("Result: %d\n", result);
    return 0;
}