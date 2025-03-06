#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (1/(1+x*x));
}
int main()
{
    float i, n,h,a,b;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("Enter lower limit");
    scanf("%d",&a);
    printf("Enter upper limit");
    scanf("%d",&b);
    h =(b-a)/n;
    float x, sum =f(a)+f(b);
    for(i=1;i<n;i++)
    {
        x = a+i*h;
        sum = sum + 2*f(x);
    }
    sum = (h/2)*sum;
    printf("The integration is : %f",sum);
    return 0;
}