#include<stdio.h>

int main(){
    int numb1;

    scanf("%d", &numb1);

    if(numb1 % 6 == 0)
    printf("Excellent");
    else if(numb1 % 2 == 0 || numb1 % 3 ==0)
    printf("OK");
    else
    printf("Noo");





    return 0;
}