#include <stdio.h>
int main(){
    int length;
    int width;
    printf("length= \n");
    scanf("%d", &length);
    printf("Width= \n");
    scanf("%d", &width);
    int area= length*width;
    int perimeter= 2*(length+width);
    printf("Area= %d \n" , area);
    printf("Perimeter= %d \n", perimeter);
    return 0;
}