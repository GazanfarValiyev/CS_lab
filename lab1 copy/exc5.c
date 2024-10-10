#include<stdio.h>
#include<stdlib.h>

int main(){
    int numb1, a , b, c, greatest, smallest;

    scanf("%d", &numb1);

    numb1 = abs(numb1);

    a = numb1 / 100;
    b = (numb1 / 10) % 10;
    c = (numb1 % 100) % 10;

    greatest = a;
    smallest = a;
    
    if(b > greatest)
    {greatest = b;}
    if(c < smallest)
    {smallest = c;}
    if(c > greatest)
    {greatest = c;}
    if(b < smallest)
    {smallest = b;}

    printf("the greatest is %d\n", greatest);
    printf("the smallest is %d", smallest);


    return 0;
}