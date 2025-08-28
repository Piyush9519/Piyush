#include <stdio.h>
int main(){
    float radius,area,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14*radius*radius;
    printf("The area of the circle is: %.2f\n", area);

    circumference = 2*3.14*radius;
    printf("The circumference of the circle is: %.2f\n", circumference);
}
