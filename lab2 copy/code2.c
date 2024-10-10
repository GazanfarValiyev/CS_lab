#include<stdio.h>

int main(){
    int a, b, k, sum, number, c;
    scanf("%d%d%d", &a, &b, &k);
    if(a>b)
    {
      c = a;
      a = b;
      b = c;

    }
    
    number = a;
    sum = 0;
    while(number <= b)
    {
        if(number % k == 0){
        sum = sum + number;
        }
        number++;
    }

    printf("%d", sum);
    return 0;
}