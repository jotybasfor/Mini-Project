#include<stdio.h>
int main(){
    float celsius;
    printf("Enter temperature in celsius= \n");
    scanf("%f", &celsius);
    float z=(celsius*9/5)+32;
    printf("Temperature in fahrenheit= %.2f", z);
    return 0;
}