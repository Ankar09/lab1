#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, s, area;

  printf("Enter the valu of a=");
  scanf("%f",&a);
  printf("Enter the valu of b=");
  scanf("%f",&b);
  printf("Enter the valu of c=");
  scanf("%f",&c);

  s = (a+b+c)/2; // Semiperimeter

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of the triangle = %.2f\n", area);

  return 0;
}
