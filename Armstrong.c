#include <stdio.h>
void main(){
    int num, sum = 0, n, r;
    printf("Enter the Number :\n");
    scanf("%d", &num);
    n = num;
    while(num){
        r = num % 10;
        sum = sum + r*r*r;
        num = num / 10;
    }
    if(sum == n){
        printf("Armstrong...");
    }
    else{
        printf("Not Armstrong...");
    }
}