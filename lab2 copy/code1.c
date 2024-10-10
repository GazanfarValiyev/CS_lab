#include<stdio.h>

int main(){
    int n, x, sum, y, product;
    scanf("%d", &n);
    y = 1;
    product = 1;
    sum = 0;
    while(y<=n)
    {
        x = 3*y -1;
        product = product * x;
        sum = sum + x;
        y++;
    }
    
    printf("The sum is %d\n", sum);
    printf("The product is %d", product);

    return 0;
}