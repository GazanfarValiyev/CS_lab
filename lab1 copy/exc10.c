#include <stdio.h>
#include <math.h>

int main() {
    float x, y, x0, y0, r, d;
    
    scanf("%f %f", &x, &y);
    
    scanf("%f %f", &x0, &y0);
    
    scanf("%f", &r);
    d = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    if (d < r) {
        printf("its inside");
    } else if (r == d ) {
        printf("its on it");
    } else {
        printf("its outside");
    }

    return 0;
}