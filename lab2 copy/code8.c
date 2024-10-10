#include<stdio.h>

int main(){
    int a, b, fib, i, n;

    scanf("%d", &n);

    a = 0;
    b = 1;
    i = 2;
    while (i <= n) {
            fib = a + b;
            a = b;
            b = fib;
            i++;
        }


    printf("%d", fib);
    return 0;
}