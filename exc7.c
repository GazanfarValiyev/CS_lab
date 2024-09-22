#include<stdio.h>

int main(){
    int width, length, height, radius, diameter;
    scanf("%d%d%d%d", &width, &length, &height, &radius);

    diameter = radius * 2;

    if(diameter > width && diameter > length && diameter > height)
    printf("It is not possible");
    else
    printf("It is possible");



    return 0;
}