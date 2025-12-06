#include<stdio.h>
int main(){
    int number;
    printf("Enter ramesh lucky number: ");
    scanf("%d", &number);
    
    if(number%2==0){
        printf("%d is even \n", number);
    }
    else{
        printf("%d is odd \n", number);
    }
    
    if(number%5==0){
        printf("%d is divisible by 5.\nRamesh will have extra luck!\n", number);
    }
    else{
        printf("%d is not divisible by 5.\nRamesh will have no extra luck!\n", number);
    }
    return 0;
}