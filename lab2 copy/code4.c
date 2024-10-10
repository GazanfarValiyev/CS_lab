#include<stdio.h>

int main(){
    int a, b, sum, y;

    scanf("%d", &a);
    y = 1;
    sum = 0;
    while(y <= a)
    {
        scanf("%d", &b);
        sum = sum + b;
        y++;
    }

    printf("%d", sum);

    return 0;
}