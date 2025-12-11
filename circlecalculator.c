#include<stdio.h>
#include<math.h>

int main() 
{
  float radius;
  float   PI = 3.14159265358979323846;


    printf("What is the radius of the circle? ");
    scanf("%f", &radius);

    float area = PI * pow(radius, 2);
    printf("The area of the circle is %.2f\n",area);

    float circumference = 2* PI * radius;
    printf("The circumference of the circle is %.2f\n", circumference);

    float diameter = 2 * radius;
    printf("The diameter of the circle is %.2f", diameter);
    return 0;
}
 