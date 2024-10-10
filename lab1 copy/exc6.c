#include<stdio.h>

int main(){
    int t1, t2, t3, t4, duration;

    scanf("%d%d%d%d", &t1, &t2, &t3, &t4);

    duration = t1;

    if(t2 > duration)
    {duration = t2;}
    if(t3 > duration)
    {duration = t3;}
    if(t4 > duration)
    {duration = t4;}

    printf("The duration is %d", duration);





    return 0;
}