#include<stdio.h>

int main(){


    int a, b, rem;
    scanf("%d %d", &a, &b);
    rem = a - (a/b) * b;
    if(rem == 0){
        printf("Even\n");
    }else{
        printf("Odd");
    }
    return 0;
}