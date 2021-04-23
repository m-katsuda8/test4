#include <stdio.h>
#include <math.h>

int main(void)
{
        double a, b, c; /*方程式の項*/
        double x1, x2;  /*２次方程式の解*/

        a = 2.0;
        b = 8.0;
        c = -16.0;

        x1 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
        x2 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
        printf("%fx*x%+fx%+f=0の解は%fと%fです。\n",a ,b ,c ,x1 ,x2);

     //  /*検算*/
     //  printf("a*x1*x1 + b*x1 + c = %f\n", a * x1 * x1 + b * x1 + c);
     //  printf("a*x2*x2 + b*x2 + c = %f\n", a * x2 * x2 + b * x2 + c);

        a = 1.0;
        b = -10.0;
        c = 2.0;

        x1 = (-b + sqrt(b * b -4.0 * a * c)) / (2.0 * a);
        x2 = (-b + sqrt(b * b -4.0 * a * c)) / (2.0 * a);
        printf("%fx*x%+fx%+f=0の解は%fと%fです。\n",a ,b ,c ,x1 ,x2);

     //  /*検算*/
     //  printf("a*x1*x1 + b*x1 + c = %f\n", a * x1 * x1 + b * x1 + c);
     //  printf("a*x2*x2 + b*x1 + c = %f\n", a * x2 * x2 + b * x2 + c);

        return 0;
}

