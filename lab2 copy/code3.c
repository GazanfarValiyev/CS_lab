#include<stdio.h>

int main(){
    float a, sum, y, x;
    scanf("%f", &a);
    sum = 0;
    y = 1;
    while(y <= a)
    {
        x = 1 / y;
        sum = sum + x;
        y++;
    }

    printf("%.3f", sum);
    return 0;
}