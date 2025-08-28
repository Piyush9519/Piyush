#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer value: ");
    scanf("%d", &a);
    float b,c;
    printf("Enter a float value: ");
    scanf("%f", &b);
    
    c = a+b;
    printf("Sum of two values is %.2f\n", c);
    return 0;
}
