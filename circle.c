#include <stdio.h>
#define PI 3.14
int main (){
    /* multiple
    line
    comment */
    double area, radius;
    printf ("\n Enter the radius");
    scanf ("%lf", &radius);
    area = PI * radius * radius;
    printf ("\n The area of the circle is %lf", area);
    return(0);
}