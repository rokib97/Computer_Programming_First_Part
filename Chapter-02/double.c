#include<stdio.h>

int main(){


    double x, y, sum;
    x = 9.5;
    y = 8.743;
    sum = x + y;
    printf("Sum is %lf\n", sum);
    printf("Sum is %0.2lf\n", sum);
    printf("Sum is %0.3lf\n", sum);
    printf("Sum is %0.0f\n", sum);

    return 0;
}