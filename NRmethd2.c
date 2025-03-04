#include<stdio.h>
#include<math.h>
#define tolerance 0.0001
float f(float x,int a,int b,int c)
{
    return a*x*x + b*x +c;
}
float df(float x, int a, int b)
{
    return 2*a*x + b;
}
int main()
{
    int i,max,a,b,c;
    float x0,x,dev;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter the maximum iteration: ");
    scanf("%d",&max);
    printf("Enter the initial guess: ");
    scanf("%f",&x0);
    for (i = 1; i <= max; i++)
    {
        dev = df(x0,a,b);
    if(fabs(dev)<tolerance) 
{
    printf("The derivative is too small\n");
    return 0;
} 
x = x0 - f(x0,a,b,c)/dev;
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