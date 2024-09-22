#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, y, n, D;
    scanf("%d%d%d", &a, &b, &c);

    D = b*b - 4*a*c;
//sqrt();
    y = (-b - sqrt(D))/(2*a);

    n = (-b + sqrt(D))/(2*a);

    if(D < 0)
    printf("no roots");
    else if(D > 0)
    printf("%d %d", y, n);
    else if(D == 0)
    printf("%d", y);


    return 0;
}