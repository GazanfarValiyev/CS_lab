#include<stdio.h>

int main(){

    int n, a, sequence;

    scanf("%d", &n);

    a = n;
    printf("%d ", a);
    sequence = 1;
    while(a != 1)
    {
        if(a % 2 == 0)
        {
            a /= 2;
        }
            else
            {
            a = 3*a + 1;
            }
        printf("%d ", a);
        sequence++;
            
        
    }
    printf("\n%d", sequence);

    return 0;
}