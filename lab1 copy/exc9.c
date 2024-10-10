#include<stdio.h>
#include<stdlib.h>
int main(){

    int numb1, a, b, c, mult1, mult2, mult3, mult4; 
    scanf("%d", &numb1);
    
    numb1 = abs(numb1);
    
    a= numb1/100;
    b= (numb1/10)%10;
    c= (numb1%100)%10;

    mult1 = a*b*c;
    mult2 = a*b;
    mult3 = a*c;
    mult4 = b*c;

    if(mult1 > mult2 && mult1 > mult3 && mult1 > mult4)
    printf("the max is %d", mult1);
    else if(mult2 > mult1 && mult2 > mult3 && mult2 > mult4)
    printf("the max is %d",mult2 );
    else if(mult3 > mult1 && mult3 > mult2 && mult3 > mult4)
    printf("the max is %d",mult3 );
    else if(mult4 > mult1 && mult4 > mult2 && mult4 > mult3)
    printf("the max is %d",mult4 );



    return 0;
}