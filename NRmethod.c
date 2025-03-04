//find approximate root of F(x)= x^2 - 3x + 2 using Newton-Raphson method
#include<stdio.h>
#include<math.h>
#define tolerance 0.0001
float f(float x)
{
    return x*x - 3*x +2;
}
float df(float x)
{
    return 2*x - 3;
}
int main()
{
    int i,max;
    float x0,x,dev;
    printf("Enter the maximum iteration: ");
    scanf("%d",&max);
    printf("Enter the initial guess: ");
    scanf("%f",&x0);
    for (i = 1; i <= max; i++)
    {
        dev = df(x0);
    if(fabs(dev)<tolerance) 
{
    printf("The derivative is too small\n");
    return 0;
} 
x = x0 - f(x0)/dev;
if(fabs(x-x0)<tolerance)
{
    printf("The root is %f\n",x);
    return 0;
}
 x0 = x;   
}
printf("The solution cannot be conversed\n");
return 0;
}